// A program to find the sum of the first 10 numbers.

// n(n+1)/2
#include <stdio.h>

int main(void)
{
    int sum = 0, input;

    printf("Enter a number:\n");
    scanf("%i", &input);
    // Uncomment what you want:

    // way--> 1

    // for(int i = 1; i <= input; i++)
    //   {
    //     sum += i;
    //   }
    // printf("Sum = %i\n",sum);

    // way --> 2 & Faster

    //   printf("Sum = %i\n",(input*(input+1)/2));

    return 0;
}