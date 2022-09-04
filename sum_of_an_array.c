#include<stdio.h>
int sum_of_array(int arr[], int n){

    int i, a, sum, b =0;

    for(i = 0; i<n; i++){

        scanf("%d", &arr[i]);
    }
    for(i = 0; i<n; i++){

        a = arr[i];
        sum = a + b;
        b = sum;
    }
    return sum;
}

int main(){



    int sum;
    int n;
    printf("Please Input How Many Number Need To Be Summed : ");
    scanf("%d", &n);// At first size of the Array Need to be determined
    int arr[n]; // Then the array should be initiated.
    printf("Now Enter The Numbers and Press Enter After Input One By One : \n");

    sum = sum_of_array(arr, n);

    printf("The Sum of  All The Numbers is : %d", sum);

    return 0;
}

