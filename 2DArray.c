#include<stdio.h>
int main(){

    int arr[4][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int row, col;


    for(row=0; row<4; row++){

        for(col=0; col<4; col++){

            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }
    return 0;
}
