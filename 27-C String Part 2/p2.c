#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your name:\n");
    scanf("%s", name);

    for(i = 0; name[i] != '\0'; i++);

    printf("%s ==> %i Alphabet\n",name,i);

    return 0;
}
// DONE