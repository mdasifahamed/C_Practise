#include<stdio.h>
/** Convertion Decimal to Binary Needs Remainder(bhagses) of Division of decimal value by 2 To Catch its Remainder value

    It Will go Untill When The division value is  0.
    suppose an decimal number To be Converted to Binary Lets Follow Below demostration.

        Number/2    Divided value       Reamainder Values
        25/ 2           12                  1
        12/2            6                   0
        6/2             3                   0
        3/2             1                   1
        1/2             0                   1

        as division value is come to 0 the loop will stopped and
        all the remainder value will be stored into an  array and the the array will be ordered reversely
        Note: the Binary number Is set of remainder values from its bottom to top 11001.
**/
int main(){


    int a,div,y,i=0, j,k;
    printf("Enter A  Decimal Number(i.e:1254) To Convert it To Binary Number: ");
    scanf("%d", &a);
    k = a; // to show again the in printf.
    int binary[32];



    for(i=0; div>0; i++){
        div = a/2;
        y = a % 2;
        binary[i] = y;//storing the binary number to the array.
        a = div; // Updating the value of div.
    }


    printf("\n\nConverted Binary Number of %d Is  : ",k);
    // reversing the Array.
   for(j=i-1; j>=0; j--){

    printf("%d",binary[j]);
   }

   return 0;

}
