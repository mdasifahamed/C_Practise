#include<stdio.h>
int main(){

    int a = 10, b = 30, temp;
    int *ptr1, *ptr2;


    ptr1 = &a;
    ptr2 = &b;


    //Swaping
    temp = *ptr1; // *ptr1 holds 10 before initianting temp to  *ptr1 after initiating now *ptr1 is empty and temp hold the ptr11  value now
    *ptr1 = *ptr2; // as  *ptr1  is empty now we can assing *ptr2  value 30 to *ptr1 now *ptr2 will be empty
    *ptr2 = temp; //  As *ptr2  is empty now we can assing temp value which was assigned 10 at can be assighed to *ptr2 now thsu  value of a and b is swapped now .

    printf("Value Of A : %d\n", a);
    printf("Value Of B : %d\n", b);
    printf("After Swaping Value of A : %d\n", *ptr1);
    printf("After Swaping Value of B : %d\n", *ptr2);

    return 0;
}
