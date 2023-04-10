/*
برنامج فيه array تحتوي على 10 أرقام, يطلب من المستخدم إدخال رقم و يحسب كم عدد الأرقام الأكبر من هذا الرقم الموجودة داخل ال array وعدد الارقام الاصغر من هذا الرقم الموجودة داخل ال array.
*/

#include <stdio.h>
int main()
{
	float arr[10], number, bigger = 0, smaller = 0;
	;

	printf("Enter your number:\t");
	scanf("%f", &number);

	printf("Enter 10 numbers:\n");

	for (int i = 0; i < 10; i++)
	{
		scanf("%f", &arr[i]);
		if (arr[i] > number)
			bigger++;
		if (arr[i] < number)
			smaller++;
	}
	printf("There are %f number bigger than your number\n"
		   "There are %f number bigger than your number\n",
		   bigger, smaller);
}