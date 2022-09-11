#include<stdio.h>
// pointer variable is a speacial type of variable that indicates memory address of another variable.
int main(){

    int x;

    x = 10;

    int *p; // declaring pointer variable

    p = &x; // storing memory address of x variable to pointer variable.

    printf("Values Of X = %d\n", x);

    printf("Memory Address  Of X = %d\n", &x); // to print memory address of an Variable use "&" before variable name.

    printf("Values of Pointer Variable P = %d\n", p); // to print memory address of an variable Using pointer variable.

    printf("Memory Address Of Pointer variable = %d\n", &p); // to print memory address of an Pointer variable.

    printf("Value of the Variable Whose Address  Is Stored in Pointer Variable = %d\n", *p);// to print value of variable whose address
                                                                                            // is store in a pointer variable.
    printf("Memeory Addres Of Pointer Variable In HexaNumber : %x ",&p); // to print decimal number in hexadecimal use '%x' instead of '%x'.

    return 0;

}
