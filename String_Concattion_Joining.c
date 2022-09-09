#include<stdio.h>
int main(){

    int i, j, len =0;

    char word1 [10], word2[10], join_word[21];

    printf("Enter Word 1 : ");

    gets(word1);

    printf("Enter Word 2 : ");

    gets(word2);

    for(i=0, j=0; word1[i]!='\0'; i++,j++){

        join_word[j] = word1[i];
        len ++; // This len counts length of word1 string array . here i and j ends at the same value as length and first word copy end here.
    }
    for(i=0, j=len; word2[i]!='\0'; i++, j++){ // here j = len  mean now j will start from after  the last word position  of word1
                                               // string array and un untill the word ends at word 2 last position

        join_word[j] = word2[i];
    }

    join_word[j] = '\0'; // this to declare end of string array.

    printf("The First Word Is : %s\n", word1);
    printf("The Second Word Is : %s\n", word2);
    printf("The Joined  Word Is : %s", join_word);

    return 0;


}
