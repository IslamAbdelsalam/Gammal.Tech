#include <stdio.h>

int main(){
    int number;
    while(5)
    {
        scanf("%d",&number);
        // printf("%i\n",number);
        if(number == 5){
            printf("Found\n");
            return 0;
        }
    }

    return 0;
}