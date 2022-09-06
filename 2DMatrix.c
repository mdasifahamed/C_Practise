#include<stdio.h>
int main(){

    int row, col;

    printf("Enter The Numbers of Row in the Matrix : ");

    scanf("%d", &row);

    printf("Enter The Numbers of Row in the Matrix : ");

    scanf("%d", &col);

    int matrix[row][col];

    printf("Enter Elements In The Array\n");
    for(int i = 0; i<row; i++){

        for(int j = 0; j<col; j++){
            printf("Matrix[%d][%d] = ", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The Gennerated Matrix is Shown Below \n");
    for(int i = 0; i<row; i++){

        for(int j =00; j<col; j++){

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}
