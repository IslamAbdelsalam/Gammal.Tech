#include <stdio.h>
#include <string.h>
int main()
{
    char name[100], user_name[100];

    printf("Enter your name:\n");
    scanf("%s", name);

    strcat(user_name,name);

    printf("%s\n",user_name);

    return 0;
}
// DONE