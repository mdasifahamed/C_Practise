#include<stdio.h>
int main(){

    int i;
    char word[100], c_word[100];

    printf("Enter The Word: ");

    gets(word);

    for(i=0; word[i]!= '\0'; i++){

        c_word[i]=word[i];
    }
    c_word[i] = '\0';

    if(c_word[0]=='\0'){

        printf("There is Nothing to Copy");
    }
    else{

        printf("The Copied Word is %s", c_word);
    }


    return 0;
}
