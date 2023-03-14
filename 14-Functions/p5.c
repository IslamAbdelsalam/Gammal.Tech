/*
برنامج آلة حاسبة تقوم بعمليات ( الجمع و الطرح و الضرب و القسمة ) باستخدام ال functions
*/

#include <stdio.h>
//prototypes
void sum(double x, double y);
void mult(double x, double y);
void min(double x, double y);
void dev(double x, double y);

int main()
{

    double n1, n2, result;
    char op;

    printf("Our Calculator\n");
    printf("================\n");

    printf("Enter the operation\n");

    scanf("%lf%c%lf", &n1, &op, &n2);

    switch (op)
    {
    case '+':
        sum(n1, n2);
        break;
    case '-':
        min(n1, n2);
        break;
    case '*':
        mult(n1, n2);
        break;
    case '/':
        dev(n1, n2);
        break;
    default:
        printf("Enter a + or - or / or * only\n");
    }
    return 0;
}

void sum(double x, double y)
{
    printf("%0.1lf\n", x + y);
}

void min(double x, double y)
{
    printf("%0.1lf\n", x - y);
}

void mult(double x, double y)
{
    printf("%0.1lf\n", x * y);
}

void dev(double x, double y)
{
    if (y == 0)
    {
        printf("Cannot divide by zero\n");
        return;
    }
    else

        printf("%lf", x / y);
}

//DONe 