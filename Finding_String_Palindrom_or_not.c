#include<stdio.h>
#include<string.h>
// Palindrome Is Type of situation when String Or numBer canBe after reversing its Order Like The Word Madam it is Reverse
// The result will be same madaM. Like numuber 121 if it is reversed it will be same as 121.

int main(){
    int i, j, len =0, check;
    char word1[30];
    char word2[30];
    printf("Enter a word To Reverse it : ");
    gets(word1);

    for(i=0; word1[i]!='\0'; i++){

        len++;
    }

    for(j=0, i=len-1; word1[i]!='\0'; i--, j++){

        word2[j] = word1[i];
    }

    word2[j] = '\0';

    check = strcmp(word1, word2);

    if(check==0){
        printf("The String is Palidrome");
    }else{

        printf("The String is Not Palindrome\n ");
        printf("And Its reverse is : %s", word2);
    }


    return 0;
}
