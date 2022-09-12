#include<stdio.h>
int main(){


    int a[] = {10,50,30,70,80,90};


    int *ptr;

    ptr = &a[0];

    for(int i =0 ; i<6; i++){

        printf("%d\n", *ptr);

        ptr++; // this ptr will increase the index of array a and will point to the values of index as it was assigned memory address of the array a.
    }

    return 0;
}
