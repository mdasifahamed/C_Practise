#include<stdio.h>
// The directory of The File which Is going To be Read Must Be in The Same Directory Where the Programm .c file is There .
// fgets() function read the file character by Character A loop will be needed to read the whole file .

int main(){


    char ch;
    FILE *file;

    file = fopen("Test4.txt", "r");

    if(file == NULL){

        printf("File Does Not Exists");
    }
    else{

        printf("File Is Opened And It Has Content Shown Below\n");

        while(!feof(file)){ // fenof() is Function Named End Of A file Which Read The File End Of It Content By Using "!"
                            // it means the will be read through the until File is ended

            ch = fgetc(file);
            printf("%c",ch);// printing each character side side through the loop.
        }
        fclose(file);

    }
    return 0;

}
