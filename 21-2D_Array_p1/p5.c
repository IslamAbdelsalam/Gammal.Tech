#include <stdio.h>
int main(){
    int arr[3][5],no;
    long long  com[3] = {0};

    printf("Enter numbers:\n");

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 5; j++)
            scanf("%d",&arr[i][j]);
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ",arr[i][j]);
            com[i] += arr[i][j];
        }
        printf("\t%lld\n",com[i]);
    }

    long long max = com[0];

    for(int k = 1; k < 3; k++){
        if(com[k] > max){
            max = com[k];
            no = k;
        }
    }

    printf("Greatest number in row no %d is: %lld\n",no+1,max);

    return 0;
}
//DONE
