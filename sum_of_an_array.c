#include<stdio.h>
int main(){


    int arr[] = {10,20,30,40,50,60,70,80};
    int a,i,sum,b=0;

    for(i=0; i<8; i++){

        a = arr[i];
        sum = a+ b;
        b = sum;
    }
    printf("The sum of the Arrray is : %d  ", sum);

    return 0;


}
