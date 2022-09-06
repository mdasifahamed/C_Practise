// The Number of rows And Column Must be Same In The All Matrix.
#include<stdio.h>
int main(){

    int row, col;

    printf("Enter The Numbers of Row in the Matrix1 : ");

    scanf("%d", &row);

    printf("Enter The Numbers of Col in the Matrix1 : ");

    scanf("%d", &col);

    int matrix1[row][col];

    printf("Enter Elements In The Matrix1\n");
    for(int i = 0; i<row; i++){

        for(int j = 0; j<col; j++){
            printf("Matrix[%d][%d] = ", i,j);
            scanf("%d", &matrix1[i][j]);
        }
    }


    int matrix2[row][col];


    printf("Enter Elements In The Matrix2\n");
    for(int i = 0; i<row; i++){

        for(int j = 0; j<col; j++){
            printf("Matrix[%d][%d] = ", i,j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("The Gennerated Matrix1 is Shown Below \n");
    for(int i = 0; i<row; i++){

        for(int j =00; j<col; j++){

            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("The Gennerated Matrix2 is Shown Below \n");
    for(int i = 0; i<row; i++){

        for(int j =00; j<col; j++){

            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    int matrix3[row][col];
    for(int i = 0; i<row; i++){

        for(int j =0 ; j<col; j++){

            matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printf("The Substraction Of Matrix1 And Matrix2 Is :\n");
    for(int i = 0; i<row; i++){

        for(int j =0 ; j<col; j++){

            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
