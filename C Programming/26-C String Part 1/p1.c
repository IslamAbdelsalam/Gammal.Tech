#include <stdio.h>
int main()
{
    char name[100];
    int age;

    printf("Enter your name:\n");
    scanf(" %s", name);

    printf("Enter your age\n");
    scanf("%d", &age);

    printf("%s %d years old.\n",name,age);

    return 0;
}
//DONE