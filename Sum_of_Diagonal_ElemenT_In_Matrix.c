#include<stdio.h>
int main(){


    int row,col,i,j, sum =0;


    printf("Enter The Number Of Row For Matrix : ");

    scanf("%d", &row);

    printf("Enter The Number Of ColUmns For Matrix: ");

    scanf("%d", &col);

    int mat[row][col];

    printf("Enter The Elements Of The Matrix\n");

    for(i=0; i<row; i++){

        for(j=0; j<col; j++){
            printf("Matrix[%d][%d] = ", i,j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    printf("The Defined (%d X %d) Matrix is shown Below\n", row, col);

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(i==j){
                sum = sum + mat[i][j];
            }
        }

    }
    printf("The Diagonal Sum Of The Matrix Is: %d", sum);
    return 0;
}
