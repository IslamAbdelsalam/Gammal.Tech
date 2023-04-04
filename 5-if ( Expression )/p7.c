#include <stdio.h>

int main(){
    int visit_counter;

    scanf("%i",&visit_counter);

    if(visit_counter >= 20)
        printf("Excellent\n");
    else
        printf("Continue you can do it\n");

    return 0;
}