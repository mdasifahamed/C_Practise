#include<stdio.h>
/** Enum is also a user type data type like structure but main difference is enum holds integer
    value against the value is stored in Enum. The Best Use of Enum When working with constant value;
**/

// Declarartion of Enum.
enum currency_names{

    BDT,USD,CNY,EUR,INR,PKR // Hererindex will start From 0;

};
enum days_of_week{

    Sat =1, Sun, Mon, Tue, Wed, Thu, Fri // Assigning 1 to Sat mean the index will start from 1 to 7
};
int main(){

    enum currency_names ex1,ex2;
    enum days_of_week d1,d2;
    int dif;
    ex1 = USD; // Assigning Enum Variable to a Value That Matches With Enum declaration Value
    ex2 = EUR;
    d1 = Sat;
    d2 = Thu;

    if(ex1==1 && ex2==3){
        printf("You have Selected To Convert From USD To EUR\n");
    }else{

        printf("Please Select The Currency Correctly\n");
    }

    dif = d2 - d1;

    printf("Total Working Days Is %d",dif);

    return 0;

}
