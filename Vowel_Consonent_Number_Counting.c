#include<stdio.h>
int main(){

    int i,vowel = 0,consonent = 0,number = 0, others = 0,words = 0, len=0;
    char word[100];
    printf("Enter A Word:  ");

    gets(word);

    for(i=0;word[i]!='\0'; i++){
        len++;
    }
    for(i=0; i<len; i++){

        if(word[i]=='A' || word[i]=='a' || word[i]=='E' || word[i]=='e' || word[i]=='I' || word[i]=='i' || word[i]=='O'
           || word[i]=='o' || word[i]=='U' || word[i]=='u'){

            vowel ++;
           }
           else if((word[i]>'A' && word[i]<= 'Z') || (word[i]>'a' && word[i]<= 'z')){

                    consonent++;
           }

           else if(word[i]>='0' && word[i]<= '9'){

                    number++;
           }
           else if(word[i]== ' '){

                   words++;
           }
           else{

                others++;
            }
    }
    words++; // This words increment means that if any word that the word[i] = ' ' is comes false single word it will increase the values beacasue at first word is initiated 0(zero).
    if(len==0){
        printf("No Words Are Found To Count Vowel, Consonent, Numbers & Spaces");
    }else {

    printf("Vowels : %d\n", vowel);
    printf("Consonents : %d\n", consonent);
    printf("Numbers : %d\n", number);
    printf("Others : %d\n", others);
    printf("Words : %d\n", words);

    }


    return 0;
}
