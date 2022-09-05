#include<stdio.h>
int main(){

    int n;

    printf("Enter How Many Number Numbers Need to Be Generated : ");

    scanf("%d", &n);

    int arr[n];

    arr[0] = 0;
    arr[1] = 1;

    for(int i =2; i<n; i++){

        arr[i] = arr[i-1] + arr[i-2];

        }

    printf("The fibbonacci Serires for First %d  Numbers is below \n", n);
    for(int i=0; i<n; i++){

        printf("%d\n", arr[i]);
    }

    return 0;
}





