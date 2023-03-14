/*
برنامج فيه array تحتوي على 5 أرقام من بين هذه الأرقام يوجد الرقم 0, يطلب من المستخدم إدخال رقم ويقوم بوضعه داخل ال array في مكان الصفر ويطبع ال array على الشاشة. ( advanced question )
*/

#include <stdio.h>
int main()
{
	int arr[5] = {1, 5, 0, 63, 9}; // 0,1,2

	printf("Enter a number:\n");
	scanf("%i", &arr[2]);

	for (int i = 0; i < 5; i++)
	{
		printf("%i ", arr[i]);
	}

	return 0;
}