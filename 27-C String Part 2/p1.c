#include <stdio.h>

int main()
{
    char fname[100], lname[100];

    printf("Enter your first name:\n");
    scanf("%s", fname);

    printf("Enter your first name:\n");
    scanf("%s", lname);

    printf("%s %s\n%s\n%s\n", fname, lname, fname, lname);

    return 0;
}
// DONE