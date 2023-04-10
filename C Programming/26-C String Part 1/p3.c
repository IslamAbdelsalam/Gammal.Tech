#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int counter = 0;

    printf("Enter your name\n");
    scanf(" %s", name);

    for (int i = 0; name[i] != '\0'; i++)
        counter++;

    // printf("counter = %d\n",counter);

    for (int i = counter - 1; i >= 0; i--)
        printf("%c", name[i]);
    
    printf("\n");
    
    return 0;
}
// DONE....