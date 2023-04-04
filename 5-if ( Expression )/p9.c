#include <stdio.h>
int main(){

    int n;

    printf("Enter the number: \n");
    scanf("%i",&n);

    if(n > 1)
        printf("Take the Elevator\n");
    else if (n == 1 || n == 0)
        printf("Take the stairs\n");
    else
        printf("Error \a\n");


    return 0;
}
//Done