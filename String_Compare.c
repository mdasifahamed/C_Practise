#include<stdio.h>
#include<string.h>
int main(){
    char word1[20];
    char word2[20];
    printf("Enter First Word(The Word Must Be Not More The 20 Character): ");
    gets(word1);
    printf("Enter Second Word(The Word Must Be Not More The 20 Character): ");
    gets(word2);

    int check = strcmp(word1,word2);
    if(check==0){
        printf("The Both Words Are Same");
    }
    else{

        printf("The Both Words Are Not Same");
    }
    return 0;
}
