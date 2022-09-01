#include<stdio.h>
int main(){

    char ch ='d';

    if(ch>=97 && ch<=122){

            ch = 65 + (ch-97);
    }
    printf("%c", ch);

    return 0;
}
