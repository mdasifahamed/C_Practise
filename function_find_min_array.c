#include<stdio.h>
int finding_min_max_array(int arr[], int n){

    int i, min;
    min = arr[0];

    for(i=0; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;


}
int main(){

    int n;
    int min;

    printf("How Many Number Will There To Finding Min Max from Them Please Insert : ");

    scanf("%d", &n);

    int arr[n];
    printf(" Insert The Numbers To Findout From \n");

    for(int i =0 ; i <n; i++){

        scanf("%d", &arr[i]);
    }

     min = finding_min_max_array(arr,n);

    printf("The Min of The Array is : %d\n", min);

    return 0;

}
