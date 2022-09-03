#include<stdio.h>
int main(){


    char word[] = {'p','l','u','G','i','n','s'};
    int i, length = 7;

    for(i=0; i<length; i++){

        if(word[i]>='a' && word[i]<='z'){ // here instead of 'a' number 97 can be used and for 'z' number 122 can be used and result will be same.

            word[i] = 'A' + (word[i] - 'a');
        }

    }
    printf("%s", word);
}
