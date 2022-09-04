#include<stdio.h>
int find_max_array(int arr[], int n){


    int i, max;

    max = arr[0];

    for(i =0 ; i<n; i++){

        if(max<arr[i]){

            max = arr[i];
        }
    }

    return max;

}
int main(){

    int n, max;
    printf("Enter How Many  Numbers Of Element Will Be There To Findout Max From Them : ");

    scanf("%d", &n);

    int arr[n];
    int i =0;

    while(i<n){

        scanf("%d", &arr[i]);

        i++;
    }

    max = find_max_array(arr,n);

    printf("The Maximum Value In array Is : %d", max);

    return 0;


}
