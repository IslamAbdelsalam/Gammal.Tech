
#include <stdio.h>

int main(){
    int day, month, year;

    printf("Enter your birth date\n");
    scanf("%i%*c%i%*c%i",&day,&month,&year);

    printf("%i/%i/%i\n",day,month,year);

	return 0;
}