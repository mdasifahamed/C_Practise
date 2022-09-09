#include<stdio.h>
int main(){

    int i, length=0;
    char word[100];
    printf("Enter The Word : ");
    gets(word);

    for(i=0; word[i]!='\0'; i++){

        length++;
    }
    if(length ==0){

        printf("You Have Not Enter Anything");
    }
    else{

        printf("The Length Of the Word %s has  %d Charcters Including Space" , word,length);
    }

    return 0;



}
