#include<stdio.h>

int fact(int n){

    if(n==1){ // base call to stop recursive call

        return 1;
    }else {

        return n * fact(n-1); // Recursive call it call the fucntion fact() until n will be 1 which matches base case.
    }
}
int main(){

    int n, result;

    printf("Enter Number To Find Its Factorial : ");

    scanf("%d", &n);

    result = fact(n);

    printf("The factorial of %d! Is : %d", n, result);

}
