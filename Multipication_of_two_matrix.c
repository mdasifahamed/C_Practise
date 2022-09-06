// Number of Columns in Matrix 1 Must Be Match to Number Rows in Matrix 2 Thats mean col==row2
#include<stdio.h>
int main(){


int i,j,k,col1,col2,col3,row1,row2,row3,sum=0;

printf("The Number  of Columns In Matrix 1 Must Match to Number Rows in Matrix 2\n");

printf("Enter Number of Rows in Matrix 1: ");

scanf("%d", &row1);

printf("Enter Number of Columns in Matrix 1: ");

scanf("%d", &col1);

int matrix1[row1][col1];

printf("Enter Number of Rows in Matrix 2: ");

scanf("%d", &row2);

printf("Enter Number of Columns in Matrix 2: ");

scanf("%d", &col2);

int matrix2[row2][col2];

if(col1!=row2){

    printf("Number of Columns in Matrix is Not Same as Number of Rows in Matrix 2");
}else{

    printf("Enter The Elements For Matrix 1: \n");
    for(i=0; i<row1; i++){
        for(j=0; j<col1; j++){
            printf("Matrix[%d][%d] = ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
     printf("Enter The Elements For Matrix 2: \n");
    for(i=0; i<row2; i++){
        for(j=0; j<col2; j++){
            printf("Matrix[%d][%d] = ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("The Generated Matrix 1 is Shown Below\n");
    for(i=0; i<row1; i++){
        for(j=0; j<col1; j++){
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("The Generated Matrix 2 is Shown Below\n");
    for(i=0; i<row2; i++){
        for(j=0; j<col2; j++){
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    row3 = row1;
    col3 = col2;
    int matrix3[row3][col3];

    for(i=0; i<row3; i++){
        for(j=0;j<col3; j++){
            for(k=0; k<col1; k++){

                sum = sum + matrix1[i][k]*matrix2[k][j];
            }
            matrix3[i][j] = sum;
            sum =0;
        }
    }
    printf("The Multipication of Two  Matrix  is Shown Below\n");
    for(i=0; i<row3; i++){
        for(j=0; j<col3; j++){

            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }

}

return 0;

}


