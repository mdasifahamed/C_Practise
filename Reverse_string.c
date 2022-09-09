#include<stdio.h>
#include<string.h>
int main(){
    char word1[20];

    printf("Enter First Word(The Word Must Be Not More The 20 Character): ");

    gets(word1);

    printf("The Word Is : %s\n", word1);

    strrev(word1);

    printf("The Word in Reversed Version  is : %s", word1);

    return 0;
}
