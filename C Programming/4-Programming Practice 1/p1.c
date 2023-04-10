
/*برنامج يطلب من الشخص إدخال رقم و يطبع الناتج بين علامتي تنصيص  "    "*/
#include <stdio.h>

int main(){
	int number;
	printf("Enter a number: ");
	scanf("%i",&number);

	printf("\"%i\"\n",number);

	return 0;
}