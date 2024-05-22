#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[])


{

    if(argc < 3 || argc > 5) 
    {
        printf("error- please write again");
    }   

    
    FILE *file = fopen("phonebook.txt", "a");
    if (file == NULL) {
        perror("Failed to open the file");
        exit(EXIT_FAILURE);
    }

     //   1 name and phone number.
    if (argc == 3)
    {
        fprintf(file, "%s,%s\n", argv[1], argv[2]);
        fclose(file);
    }
    
    // for  1 name,  1 second/last name and phone number
    if (argc == 4)
    {
            fprintf(file, "%s %s,%s\n", argv[1], argv[2], argv[3]);
            fclose(file);
    }

    // for name, second name, last name and phone number
    if (argc == 5)
    {
        fprintf(file, "%s %s %s,%s\n", argv[1], argv[2], argv[3], argv[4]);
        fclose(file);
    }

    
    return 0;


}