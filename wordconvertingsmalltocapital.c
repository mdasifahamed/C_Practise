#include<stdio.h>
int main(){


    char country[] = {'D','o','X','y','B','l','o','c','k','s'};
    int i, n = 10;

    printf("%s\n", country);

    for(i=0; i<n; i++){

        if(country[i]>='a' && country[i]<='z'){

            country[i] = 'A' + (country[i] - 'a');
        }
    }
    printf("%s\n", country);

}
