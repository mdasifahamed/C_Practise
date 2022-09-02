#include <stdio.h>
int main(){

    char ch = 'T';
    if(ch>=65 && ch<=90){

        ch = 97 + (ch-65);
    }
    printf("%c", ch);
}
