#include <stdio.h>

void decimalToBinary(int decimal)
{
    int binary = 0, base = 1;

    while (decimal > 0)
    {
        binary += (decimal % 2) * base;
        decimal /= 2;
        base *= 10;
    }
    printf("your number in binary --> %d\n", binary);
}

void decimalToOctal(int decimal)
{
    printf("Your number in Octal --> %o\n", decimal);
}

void decimalToHexa(int decimal)
{
    printf("Your number in Hexa --> %X\n", decimal);
}

void decimalToAll(int decimal)
{
    decimalToBinary(decimal);
    decimalToOctal(decimal);
    decimalToHexa(decimal);
}

int main()
{
    int number, decimal;

    printf("choies:\n"
           "=========\n"
           "1- Convert from Decimal to Binary\n"
           "2- Convert from Decimal to Octal\n"
           "3- Convert from Decimal to Hexa\n"
           "4- Convert from Decimal to all\n");
    scanf("%d", &number);

    printf("Enter the number\n");
    scanf("%d", &decimal);

    switch (number)
    {
    case 1:
        decimalToBinary(decimal);
        break;
    case 2:
        decimalToOctal(decimal);
        break;
    case 3:
        decimalToHexa(decimal);
        break;
    case 4:
        decimalToAll(decimal);
        break;

    default:
        printf("Invalid choies\n");
    }
    
    return 0;
}

// DONE