#include<stdio.h>
int main(){


    char word[] = {'S','E','T','T','I','n','G','S'};
    int i, length = 8;

    for(i=0; i<length; i++){

        if(word[i]>=65 && word[i]<= 90){  //Here instead of 65 aplphabet "A" can be used and for 90 alphabet 'Z' can be used and result will be same.

            word[i] = 'a' + (word[i]-'A');
        }
    }

    printf("%s", word);

    return 0;
}
