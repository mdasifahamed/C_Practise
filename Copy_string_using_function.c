#include<stdio.h>
#include<string.h>
int main(){


    char source[100];
    char target[100];
    printf("The Text To Copy From: ");
    gets(source);
    strcpy(target, source); // this strcpy() function take first parameter as where to copy and second parameter is from where to copy.

    printf("The Source Text is : %s\n", source);
    printf("The Target Text is : %s", target);

    return 0;
}
