#include<stdio.h>
int main(){

    char ch ='d';

    if(ch>='a' && ch<='z'){

            ch = 'A' + (ch-'a');
    }
    printf("%c", ch);

    return 0;
}
