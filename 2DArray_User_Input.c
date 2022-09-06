#include <stdio.h>
int main(){

    int row, col;

    printf("Enter number Of Rows : ");

    scanf("%d", &row);

    printf("Enter number of Columns : ");

    scanf("%d", &col);

    int arr[row][col];
    printf("Enter The Elements To The Array\n");

    for(int i = 0; i<row; i++){ // this loop is for creating rows

        for(int j = 0; j<col; j++){ // this loop creates colunms and insert data into the columns and  inthe row s also
            printf("Arr[%d][%d] = ",i,j );
            scanf("%d", &arr[i][j]);
        }
    } printf("\n");
    // for showing the array.
    for(int i = 0; i<row; i++){
        for(int j =0 ; j<col; j++){

            printf("%d ", arr[i][j]);

        }
        printf("\n");
    }

    return 0;
}
