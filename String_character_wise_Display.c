#include<stdio.h>
int main() {


    int i;
    char word[50];
    printf("Enter The Word\n");
    gets(word);
    if('\0'==word[0]){
        printf("Nothing To Print");

    }
    else{
        for(i=0; word[i]!='\0'; i++){

            printf("%c \n", word[i]);
        }
    }
    return 0;
}
