#include <stdio.h>
int main(){

    char ch = 'B';
    if(ch>='A' && ch<='Z'){

        ch = 'a' + (ch-'A');
    }
    printf("%c", ch);
}
