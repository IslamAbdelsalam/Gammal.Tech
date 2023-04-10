/*
in this code i will take the value from the user 
then convert it to binary
*/

#include <stdio.h>

int main(){
    int decimal, binary = 0, base = 1;

    printf("Enter a number to convert it to binary\n");
    scanf("%i",&decimal);

    while(decimal > 0){
        binary += (decimal % 2) * base ;
        decimal /= 2;
        base *= 10;
    }
    printf("%i\n",binary);

    return 0;
}

// Done