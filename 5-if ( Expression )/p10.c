#include <stdio.h>
int main()
{
    float salary, work_off;

    printf("Enter your salary:\n");
    scanf("%f", &salary);

    printf("Enter no of work off days\n");
    scanf("%f", &work_off);

    if (work_off <= 21)
    {
        printf("Your new salary = %0.1f LE\n", salary + 10000);
        printf("your salary increased ---> %i LE \n", 10000);
    }
    else
    {
        printf("Your new salary = %0.1f LE\n", salary + 5000);
        printf("your salary increased ---> %i LE \n", 5000);
    }

    return 0;
}
//Done