#include <stdio.h>

int main()
{
    char word[100];
    int i;

    printf("Enter the word:\n");
    scanf("%s", word);

    for (i = 0; word[i] != '\0'; i++)
        ;

    if (word[0] == word[i - 1])
        printf("Same\n");
    else
        printf("Different\n");

    return 0;
}
// DONE