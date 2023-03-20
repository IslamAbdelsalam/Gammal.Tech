#include <stdio.h>
#include <string.h>
int main()
{
    char word[100], word2[100];

    printf("Enter the first word\n");
    scanf("%s", word);

    printf("Enter the second word\n");
    scanf("%s", word2);

    if (strlen(word) > strlen(word2))
    {
        strcat(word, word2);
        printf("%s\n", word);
    }
    else
    {
        strcat(word2, word);
        printf("%s\n", word2);
    }

    return 0;
}
// DONE