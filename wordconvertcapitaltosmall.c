#include<stdio.h>
int main(){


    char word[] = {'D','O','X','Y','B','L','O','C','K','S'};
    int i, n = 10;

    printf("%s\n", word);

    for(i=0; i<n; i++){

        if(word[i]>=65 && word[i]<=90){

            word[i] = 97 + (word[i] - 65);
        }
    }
    printf("%s\n", word);

}
