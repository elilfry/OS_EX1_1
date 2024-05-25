// function to find a phone number to a person from a text file called phonebpkk.txt:

/*
how to run the program
- open terminal
- type the following commands:
    $ make
    findPhone <name>

*example: ./findPhone "John Doe"
    output: 123-456-7890
    if the name is not found, the output will be empty
*/


//./findPhone matan

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>

#define BUFFER_SIZE 256

int main(int argc, char *argv[]) {
    // Check if the correct number of arguments are provided
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <name>\n", argv[0]);
        exit(1);
    }

    // The name to search for
    char *name = argv[1];

    // Create a temporary file
    char *temp_file = "temp.txt";

    // Create the first child process
    pid_t pid1 = fork();
    if (pid1 < 0) {
        perror("Fork failed");
        exit(1);
    } else if (pid1 == 0) {
        // Open the temporary file
        int fd = open(temp_file, O_WRONLY | O_CREAT, 0666);
        if (fd < 0) {
            perror("Open failed");
            exit(1);
        }

        // Redirect stdout to the temporary file
        dup2(fd, STDOUT_FILENO);
        close(fd);

        // Execute the grep command
        char *grep_args[] = {"grep", name, "phonebook.txt", NULL};
        execvp("grep", grep_args);

        perror("execvp for grep failed");
        exit(1);
    }

    // Wait for the first child process to finish
    waitpid(pid1, NULL, 0);

    // Create the second child process
    pid_t pid2 = fork();
    if (pid2 < 0) {
        perror("Fork failed");
        exit(1);
    } else if (pid2 == 0) {
        // Open the temporary file
        int fd = open(temp_file, O_RDONLY);
        if (fd < 0) {
            perror("Open failed");
            exit(1);
        }

        // Redirect stdin from the temporary file
        dup2(fd, STDIN_FILENO);
        close(fd);

        // Execute the cut command
        char *cut_args[] = {"cut", "-d", ",", "-f", "2", NULL};
        execvp("cut", cut_args);

        perror("execvp for cut failed");
        exit(1);
    }

    // Wait for the second child process to finish
    waitpid(pid2, NULL, 0);

    // Remove the temporary file
    unlink(temp_file);

    return 0;
}


