#include <stdio.h>


void decimalToOctal(void){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("your number in Octal is: %o\n",n);
}

void octalToDecimal(void){
    int n;
    printf("Enter the number:\n");
    scanf("%o",&n);
    printf("your number in Decimal is: %d\n",n);
}


int main(){
    int choice;

    printf("choice what you want:\n"
           "=======================\n"
           "1-Convert from Decimal to Octal\n"
           "2-Convert from Octal to Decimal\n");

    scanf("%i",&choice);

    switch (choice)
    {
    case 1:
        decimalToOctal();
        break;
    case 2:
        octalToDecimal();
        break;
    default:
        printf("choice 1 or 2 \n");
    }



    return 0;
}
//Done