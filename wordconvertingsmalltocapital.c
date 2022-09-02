#include<stdio.h>
int main(){


    char country[] = {'D','o','X','y','B','l','o','c','k','s'};
    int i, n = 10;

    printf("%s\n", country);

    for(i=0; i<n; i++){

        if(country[i]>=97 && country[i]<=122){

            country[i] = 65 + (country[i] - 97);
        }
    }
    printf("%s\n", country);

}
