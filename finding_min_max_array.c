#include<stdio.h>
int main(){

    int arr[5] = {30,20,05,200,300};

    int min, max, i;

    min = arr[0];
    max = arr[0];

    for(i =0 ; i<5; i++){

        if(min>arr[i]){
            min = arr[i];
        }   if(max<arr[i]){
                max = arr[i];
            }
    }
    printf("The minumum Number In The Array Is : %d\n", min);
    printf("The maximum Number In The Array Is : %d", max);

    return 0;
}
