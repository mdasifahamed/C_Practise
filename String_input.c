#include<stdio.h>
//scanf("%s", &word); // scanf needs to replace by gets() because scanf cant control anything after space is pressed

// Bestway to Use  gets() to Get user input For string
int main(){



    char word[20];

    printf("Enter Your word = ");
    gets(word);
    printf("You have entered : %s\n", word);

    return 0;


}
