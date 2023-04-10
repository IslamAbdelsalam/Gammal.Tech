#include <stdio.h>
void decimalToHexa(void);
void hexaToDecimal(void);


int main(){
    int number;

    printf("choice what you want:\n"
           "=======================\n"
           "1-Convert from Decimal to Hexa\n"
           "2-Convert from Hexa to Decimal\n");
    scanf("%i",&number);

    switch (number)
    {
    case 1:
        decimalToHexa();
        break;
    case 2:
        hexaToDecimal();
        break;
    
    default:
        printf("Invalid value Enter no 1 or 2\n");
    }

    return 0;
}


void decimalToHexa(void){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Your number in Hexadecimal is: %X\n",n);
}

void hexaToDecimal(void){
    int n;
    printf("Enter the number:\n");
    scanf("%x",&n);
    printf("Your number in Hexadecimal is: %d\n",n);
}

//Done