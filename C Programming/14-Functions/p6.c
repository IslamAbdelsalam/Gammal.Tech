#include <stdio.h>


void it(int n){
    for(int i = 1; i <= n; i++){
        printf("%i ",i);
    }
}



int main(){
    
    int number;
    printf("Enter a number:\n");
    scanf("%i",&number);

    it(number);
    
    return 0;
}
//Done