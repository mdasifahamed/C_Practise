#include<stdio.h>
// File directory will be the  same director where the program file .c is kept.
// wirintg function fputs() this iputs dtat to a file as wholes string.
int main(){

    FILE *file;
    char name[25];
    // creting an file if not exist using mode "a"
    file = fopen("Test3.txt","a");
    // checking if the file is created or not if true then file ==  Null will be true
    if(file == NULL){

        printf("File Does Not Exists");
        // if file is created the below line of code will be executed
    }else{

        printf("File Is Oepned\n");
        printf("Enter YOur Name : ");
        gets(name);// getting input from the console to a string array using gets() function
        fputs(name, file); // writing The string gotten from string to the file using fputs() function.
        fputs("\n", file); // Adding new line to the file every time is opened and  after getting the name to skip line overlappig.
        printf("The File Is Written Successfully");
    }

    return 0;
}
