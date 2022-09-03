#include<stdio.h>
int find_length_array_of_char(char arr[]){

    int i, length = 0;
    for(i =0; arr[i]!='\0';i++){

        length++;
    }
    return length;

}
int main(){

    char word[100];
    int length;
    printf("Please Type : ");
    while(NULL != gets(word)){ // at the starting positing condition will be true because we are getting input throgh gest funtion to the array thats why loop will running;

        length = find_length_array_of_char(word);
        printf("Lenght Of The array Is : %d", length);
        break;
    }
    return 0;

}
