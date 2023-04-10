#include <stdio.h>
int main()
{
    float last_tall, past_tall;

    printf("Enter you tall last year:\n");
    scanf("%f", &past_tall);

    printf("Enter you tall this year:\n");
    scanf("%f", &last_tall);

    if (last_tall > past_tall)
    {
        printf("taller than last year\n");
        printf("%0.01f cm\n", last_tall - past_tall);
    }
    else

        printf("Same tall\n");

    return 0;
}
//Done 