#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
how to run: 
$ make
$ ./add2PB <name> <middle_name> <last name>,<phone number>
*/
// for example:
//./add2PB man mko,053-4535442
int main(int argc, char *argv[])

//max argc 5 min 3 
{

    if(argc < 2 || argc > 5) 
    {
        //print error
        printf("error- please write again\n");
        
    }   

    
    FILE *file = fopen("phonebook.txt", "a");
    if (file == NULL) {
        perror("Failed to open the file");
        exit(EXIT_FAILURE);
    }

    // for 1 name and phone number
    if (argc == 2){
        for(int i = 0; argv[1][i] != '\0'; i++)
        {
            if (argv[1][i] == ',')
            {
                fprintf(file, "%s\n", argv[1]);
                fclose(file);
                break;
            }
        }
    }

     // for 2 names and phone number
    if (argc == 3)
    {
        fprintf(file, "%s %s\n", argv[1], argv[2]);
        fclose(file);
    }
    
    // for  3 names and phone number
    if (argc == 4)
    {
            fprintf(file, "%s %s %s\n", argv[1], argv[2], argv[3]);
            fclose(file);
    }

    // for 4 names and phone number
    if (argc == 5)
    {
        fprintf(file, "%s %s %s %s\n", argv[1], argv[2], argv[3], argv[4]);
        fclose(file);
    }

    
    return 0;


}