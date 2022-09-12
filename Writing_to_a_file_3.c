#include<stdio.h>
// File directory will be the  same directory where the program file .c is kept.
// Fprinft() functions takes Multiple inputs as datat input for the file it take three pararmeter first one is file pointer name
// second one is format a specifier like printf() and last one is the varivlae name of the data that will be inputed to the file .
int main(){

     char name [25];
     int age;
     int contact_number;

     FILE *file;

     file = fopen("Test4.txt", "a");

     if(file == NULL){

        printf("File Does Not Exists");

     }
     else{

        printf("The File Is Opened\n");

        printf("Enter Your Name : ");

        gets(name);

        printf("Enter Your Age : ");

        scanf("%d", &age);

        printf("Enter Your Contact Number : ");

        scanf("%d", &contact_number);

        fprintf(file,"Name : %s\nAge : %d\nContact Number : %d\n", name, age, contact_number);
        printf("File Is Written Successfully");

        fclose(file);
    }

    return 0;


}
