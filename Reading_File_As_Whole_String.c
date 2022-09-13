#include<stdio.h>
// The directory of The File which Is going To be Read Must Be in The Same Directory Where the Programm .c file is There .
// fgets() function read the file As Whoel String .
int main(){



    char ch[35]; // an array of string Is Needed to Store The Data to Read because fgets() retun String Array.
    FILE *file;

    file = fopen("Test4.txt", "r");

    if(file == NULL){

        printf("File Does Not Exists");
    }
    else{

        printf("File Is Opened And It Has Content Shown Below\n");

        while(!feof(file)){ // fenof() is Function Named End Of A file Which Read The File End Of It Content By Using "!"
                            // it means the will be read through the until File is ended

            fgets(ch, 28, file);// this function takes 3 parameter first one is variarble to store the data
                                // second one is the size of file content in single line that mean how character has in each
                                // sinlge in th file andlast one is the which file to read.
            printf("%s\n",ch);// printing each character side side through the loop.
        }
        fclose(file);

    }
    return 0;

}

