#include <stdio.h>
int main(){
    int arr[1001]={0}, size;
    
    printf("Enter the size of array:\n");
    scanf("%d",&size);

    int input_arr[size];

    for(int i = 0; i < size; i++){
        scanf("%d",&input_arr[i]);
        arr[input_arr[i]]++;//arr[1]=0+1
    }

    for(int i = 0; i < 1001; i++){
        if(arr[i]==1){
            printf("number %d is a unique number\n",i);
        }
    }
    return 0;
}
//DONE 