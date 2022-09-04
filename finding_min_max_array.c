#include<stdio.h>
int main(){

    int arr[5] = {30,500,10,40,50};

    int min, max, i;

    min = arr[0];
    max = arr[0];

    for(i =0 ; i<5; i++){

        if(min>arr[i]){
            min = arr[i];
        }
        else if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("The minumum Number In The Array Is : %d\n", min);
    printf("The maximum Number In The Array Is : %d", max);

    return 0;
}
