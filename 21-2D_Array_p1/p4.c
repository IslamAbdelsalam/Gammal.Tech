#include <stdio.h>
int main(){
    int arr[3][5];
    long long sum = 0;

    printf("Enter numbers:\n");

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 5; j++)
            scanf("%d",&arr[i][j]);
    
    for(int i = 0; i < 3; i++){
        sum = 0;
        for(int j = 0; j < 5; j++){
            printf("%d ",arr[i][j]);
            sum += arr[i][j];
        }
        printf("\t%lld\n",sum);
    }

    return 0;
}
//Done