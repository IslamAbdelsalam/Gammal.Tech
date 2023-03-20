#include <stdio.h>

int Size()
{
    int i;
    char word[100];
    scanf("%s",word);

    for(i = 0; word[i] != '\0'; i++)
    // printf("i = %d\n",i);

    return i-1;

}

void compare(int n1, int n2){
    if(n1>n2)
        printf("first word is larger than the second word\n");
    else if(n1<n2)
        printf("second word is larger than the first word\n");
    else 
        printf("Same size\n");
}
int main()
{
    int n1, n2;

    printf("Enter your first word\n");
    n1 = Size();

    printf("Enter your second word\n");
    n2 = Size();

    compare(n1,n2);

    return 0;
}
// DONE....
