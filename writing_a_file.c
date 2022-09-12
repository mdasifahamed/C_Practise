#include<stdio.h>

// File directory will be the  same director where the program file .c is kept.
// wirintg function fputc() write one character by one character so a loop is need for the string array and len of array need to known.
int main(){

    char name[25] = " MD ASIF AHAMED";
    int i,len =0;
    FILE *file;

    //Counting Length of Char String Array.
    for(i = 0; name[i]!='\0'; i++){

        len++;
    }

    file = fopen("Test2.txt", "a"); // Here mode a will work as Append type whinch means if The test is not exist then will create test file file and write to it without overwiting
                                    // it and add new wor d after one after one.


    if(file == NULL){

        printf("File Does Not Exits");

    }
    else{

        printf("File Is Opened\n");
        for(i =0; i<len; i++){
            fputc(name[i], file); // this fputc() works like inputing one by one character and take 2 parameter first one what to put and second one on which file to pu.
        }
        printf("The File Written is Completed");
    }
    return 0;
}
