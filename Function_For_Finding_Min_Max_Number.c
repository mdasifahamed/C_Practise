#include<stdio.h>
void find_min_max(int arr[], int size){

        int i;

        int max = arr[0] ;

        int min = arr[0];

        for(i=0; i<size; i++){

            if(max<arr[i]){

                max = arr[i];
            }else if(min>arr[i]){

                min = arr[i];
            }

        }

    printf("Minimum Number Is : %d\n", min);
    printf("Maximum Number Is : %d\n", max);

}
int main(){

    int size;
    printf("Enter How Many Number Will Be There To Find Out: ");

    scanf("%d", &size);

    int arr[size];

    printf("Enter The %d Numbers To Find Out From \n");

    for(int i = 0; i<size; i ++){

        printf("Enter The Number %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    find_min_max(arr,size);

}
