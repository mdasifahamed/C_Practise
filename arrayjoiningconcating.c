#include<stdio.h>
int main(){

    char str1[] = "Doxy", str2[] = "Blocks",  str3[15];
    int i, j, length1 = 4, length2=6;
    for (i=0, j=0; i<length1; i++,j++){

        str3[j] = str1[i];
    }
    for (i=0, j=4; i<length2; i++,j++){

        str3[j] = str2[i];
    }

    str3[j] = '\0';

    printf("The First word Is : %s\n", str1);
    printf("The Second word Is : %s\n", str2);
    printf("The Joined word Is : %s\n", str3);

    return 0;
}
