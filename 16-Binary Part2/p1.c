/*
    i will take the input from the user
    then convert to to decimal
    binary --> decimal
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int decimal = 0, binary, base = 0;

    printf("Enter a binary number:\n");
    scanf("%i",&binary); // 1001

    while(binary > 0){
        decimal += binary % 10 * pow(2,base);
        binary /= 10;
        base++;
    }
    printf("Your number in decimal = %i\n",decimal);

    return 0;
}
//Done