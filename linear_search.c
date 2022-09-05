#include<stdio.h>
int main(){

    int arr[] = {10,20,30,40,5,78,98,55};
    int data = 5;
    int found =0;// before starting we have set found 0 that no is still founded.


    for(int i =0; i<8; ){
        if(data == arr[i]){
            printf("Data Is Found and Its Index is : %d  ", i);
            found =1; // this is the break point if data this found will be changed to 1 if data is not found then the search will be continued.
            break;
        }else {
            i++;
        }
    }
    if(found==0){ // this found means the is not never found on the loop thats why it is still 0;
        printf("Data Is Not Found!");
    }

    return 0;
}
