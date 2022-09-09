#include<stdio.h>
int main(){


    int i, j, k, len1=0, len2 =0 ;
    char word1[20];
    char word2[20];
    char temp [20];
    printf("Enter First Word : ");
    gets(word1);

    printf("Enter Second  Word To Swap With It First One : " );
    gets(word2);

    printf("The First Word Is  : %s\n", word1);
    printf("The Second Word Is  : %s\n", word2);
    for(i=0; word1[i]!='\0'; i++){ // to count the length string array
        len1++;
    }

    for(i=0; word2[i]!='\0'; i++){ // to count the length string array
        len2++;
    }
    for(i=0, j=0, k=0; i<len1 || j<len2; i++, j++, k++){ // i<len1 || j<len2 it is the main condition for running th loop for two array
                                                        // any of the condition comes true then the loop will be continued to be run

        temp[k] = word1[i];
        word1[i] = word2[j];
        word2[j] = temp[k];

    }
    word2[j] = '\0';
    word1[i] ='\0';
    printf("After Swaping\n");
    printf("Now The First Word Is : %s\n", word1);
    printf("And The Second Word Is : %s", word2);

    return 0;

}
