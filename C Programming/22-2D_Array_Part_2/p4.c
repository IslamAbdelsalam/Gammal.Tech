#include <stdio.h>

int main(){
    int arr[20] = {
        1,2,3,4,5,6,7,8,9,10,11,12,13,14,5,0,9,3,2,6}
    , input;

    printf("Enter number to check: \n");
    scanf("%d",&input);

    for(int i = 0; i < 20; i++){
        if(input == arr[i]){
            printf("Found on %i\n",i+1);
            return 0;
        }
    }

    printf("Not Found\n");

    return 0;
}
//DONE