#include <stdio.h>
int main()
{
    char fName[100], lName[100];

    printf("Enter your first name:\n");
    scanf("%s", fName);

    printf("Enter your second name:\n");
    scanf("%s", lName);

    printf("%s %s\n", fName, lName);

    return 0;
}
// DONE....