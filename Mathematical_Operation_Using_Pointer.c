#include<stdio.h>
int main(){

    int a =20, b=30;
    int *ptr1,*ptr2;
    int sum, sub, mul, div;

    ptr1 = &a;
    ptr2 = &b;

    sum = *ptr1 + *ptr2;

    sub = *ptr1 - *ptr2;

    mul = *ptr1 * *ptr2;

    div = *ptr1 / *ptr2;


    printf("Sum of %d + %d = %d\n", *ptr1, *ptr2, sum);
    printf("Sub of %d - %d = %d\n", *ptr1, *ptr2, sub);
    printf("Mul of %d * %d = %d\n", *ptr1, *ptr2, mul);
    printf("Div of %d / %d = %d\n", *ptr1, *ptr2, div);

    return 0;
}
