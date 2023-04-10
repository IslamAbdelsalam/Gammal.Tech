#include <stdio.h>
#include <string.h>
int main()
{
    char word[100], word2[100];

    printf("Enter the first word\n");
    scanf("%s", word);

    printf("Enter the second word\n");
    scanf("%s", word2);

    if (!strcmp(word, word2))
    {
        printf("Same\n");
    }
    else
    {
        if (strlen(word) > strlen(word2))
        {
            printf("%s\n", word2);
        }
        else
        {
            printf("%s\n", word);
        }
    }

    return 0;
}
// DONE