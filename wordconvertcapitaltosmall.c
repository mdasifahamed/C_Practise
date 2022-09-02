#include<stdio.h>
int main(){


    char word[] = {'D','O','X','Y','B','L','O','C','K','S'};
    int i, n = 10;

    printf("%s\n", word);

    for(i=0; i<n; i++){

        if(word[i]>='A' && word[i]<='Z'){

            word[i] = 'a' + (word[i] - 'A');
        }
    }
    printf("%s\n", word);

}
