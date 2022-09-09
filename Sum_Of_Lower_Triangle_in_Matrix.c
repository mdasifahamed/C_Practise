#include<stdio.h>
int main(){

    int row, col, i, j, sum =0;
    printf("Enter The Row For The Matrix: ");
    scanf("%d", &row);
    printf("Enter The Column For The Matrix: ");
    scanf("%d", &col);
    int mat[row][col];
    printf("Enter The elements for Matrix\n");
    for(i=0; i<row; i++){

        for(j=0; j<col; j++){
            printf("Matrix[%d][%d] = ", i,j);
            scanf("%d", &mat[i][j]);

        }
        printf("\n"); // BreakLine for Every Row Starting.

    }
    printf("The User Defined Matrix is:\n");

    for(i=0; i<row; i++){

        for(j=0; j<col; j++){

            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // Sum section for The matrix.
    for(i=0; i<row; i++){

        for(j=0; j<col; j++){

            if(i>j){

                sum = sum +mat[i][j];

            }
        }

    }
    printf("The Sum of The Lower Traingle of The Matrix is : %d", sum);

    return 0;

}
