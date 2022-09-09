#include<stdio.h>
int main(){

    int row, col, i, j;
    printf("Enter Number of Row For The Matrix : ");
    scanf("%d", &row);
    printf("Enter The Number of Columns For The Matrix:  ");
    scanf("%d", &col);

    int mat[row][col];

    printf("Enter The Elements In The Matrix: \n");

    for(i =0; i<row; i++){

        for(j=0; j<col; j++){

            printf("Matrix[%d][%d]= ",i,j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n"); // Break A line After Every row.
    }

    printf("The Defined  Matrix Is Shown Below  \n");

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){

            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    int t_mat[i][j];
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            t_mat[j][i]=mat[i][j]; // valus of main matrix column will be value of transposed matrix row  here i defins row and
                                    //j defines column thats why t_matrix will t_mat[j[i] = mat[i][j];
        }
    }
    printf("The Transposed version The Matrix Is \n");
    // for printing will run the from main matrix column .
    for(i=0; i<col; i++){

        for(j=0; j<row; j++){
            printf("%d ", t_mat[i][j]);
        }
        printf("\n");
    }
    return 0;

}
