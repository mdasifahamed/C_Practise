#include<stdio.h>

void swaping(int *ptr1, int *ptr2){


    int temp;

    temp = *ptr1; // *ptr1 holds 10 before initianting temp to  *ptr1 after initiating now *ptr1 is empty and temp hold the ptr11  value now

    *ptr1 = *ptr2; // as  *ptr1  is empty now we can assing *ptr2  value  20 to *ptr1 now *ptr2 will be empty

    *ptr2 = temp;//  As *ptr2  is empty now we can assing temp value which was assigned 10 at can be assighed to *ptr2 now thsu  value of a and b is swapped now .

    printf("After Swaping Value of First Number is : %d\n", *ptr1);

    printf("After Swaping Value of Second Number is : %d\n", *ptr2);

}
int main(){

    int a = 10;
    int b = 20;

    printf("Before Swaping Value Of First Number : %d\n", a);

    printf("Before Swaping Value Of Second Number : %d\n", b);

    swaping(&a,&b);// as in the swaping argument is passed using pointer and pointer works variable memory address so
                   // the parameter for function must be passed as memory address of the variable that why '&' is used before parameter name .

    return 0;
}
