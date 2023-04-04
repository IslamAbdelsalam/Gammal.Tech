#include <stdio.h>

int main(){
    float num1, num2;

    printf("Enter the 1th number:\n");
    scanf("%f", &num1);

    printf("Enter the 2th number:\n");
    scanf("%f", &num2);

    if(num1 > num2)
        printf("%0.1f > %0.1f\n",num1,num2);
    else if (num2 > num1)
        printf("%0.1f > %0.1f\n",num2,num1);
    else
        printf("Same numbers\n");
}