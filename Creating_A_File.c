#include<stdio.h>
// File directory will the same director where the program file .c is kept.
int main(){


    FILE *file; // Declaring Pointer variable for File type Data.


    file = fopen("fisr_file.txt", "w"); // here fopen() Takes Twor parameter first one is Name and tpye of the file
                                        // second one i mode of the file like "w","r", "a" "r+" etc;



    if(file == NULL){ // Here Null mean the file is not created . But as We use file mode w the file will be created and next statement will be esle section.

        printf("File Does Not Exists");

    }
    else{

        printf("File is Opened For Writing");
        fclose(file);
    }

    return 0;
}
