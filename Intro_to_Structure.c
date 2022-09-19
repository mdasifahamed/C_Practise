#include<stdio.h>
#include <string.h>
// structure is a user defined data Type.
// structure Can Contain many types of Primitive data type such as Int Double Float Char Boolean etc at on time.
// It Is good to declare Structure globally means before the main function because accessing from anywhere In the Code would be Easy.
// "." dot operator is used to access structure.
// In structure array Type cannot be accessed directly To access  array type of data using array is to use strcpt() function

struct Person{
     char name[30];
     int age;
     float weight;
} ;

int main(){


    struct Person person1, person2; // declaring structure person as person 1 and person 2

    // Assigning value to structure Vaiable.
    strcpy(person1.name, "E Hawa");
    person1.age = 27;
    person1.weight = 55.05;

    strcpy(person2.name, "E Khane");
    person2.age = 23;
    person2.weight = 59.47;

    printf("Person 1 info : \n");
    printf("Name : %s\n", person1.name);
    printf("Age : %d\n", person1.age);
    printf("Weight : %0.2f\n", person1.weight);

    printf("Person 2 info : \n");
    printf("Name : %s\n", person2.name);
    printf("Age : %d\n", person2.age);
    printf("Weight : %0.2f\n", person2.weight);

    return 0;
}
