#include<stdio.h>
int Linear_search(int arr[], int size, int data){


    int found = 0, i; // before starting we have set found 0 that no is still founded.


    for(i=0; i<size;){

        if(arr[i]==data){

            found = 1; // this is the break point if data this found will be changed to 1 if data is not found then the search will be continued.
            break;
        }
        else{

            i++;
        }
    }
    if(found==0){ // this found 0 means the data is  never found on the loop thats why it is still 0;

        i = -1; // this i = -1 will work in the main to determine that the data is found or not.
        return i;
    }else if(found == 1){

        return i;
    }
}

int main(){

    int size;
    int i;
    int data;
    printf("Enter The Size of The Array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter Array Element : \n");
    for(int i=0; i<size; i++){

        scanf("%d", &arr[i]);

    }
    printf("Enter The Data To Find : ");

    scanf("%d", &data);

    i = Linear_search(arr,size,data);
    if(i==-1){
        printf("Data is not Found!");
    }
    else{

        printf("The Element Is in the Index : %d", i);
    }

    return 0;
}
