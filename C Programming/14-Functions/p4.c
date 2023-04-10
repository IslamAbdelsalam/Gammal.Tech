/*
برنامج فيه function وظيفتها انها تطبع الأرقام من 1 الى 100
*/

#include <stdio.h>
// prototypes
void printTo100(void);

int main()
{
    printTo100();
}

void printTo100(void)
{
    for (int i = 1; i <= 100; i++)
        printf("%i\n", i);
}
//DONE