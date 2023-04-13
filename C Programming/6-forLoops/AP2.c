// factorial
// 1*2*3*4*5

#include <stdio.h>

int main(void)
{

    int input, factorial = 1, cInput;

    printf("Enter a number:\n");
    scanf("%i", &input);

    cInput = input;

    for (; input != 0; input--)
    {
        factorial *= input;
    }
    printf("Factorial of %i will equal %i\n", cInput, factorial);

    return 0;
}