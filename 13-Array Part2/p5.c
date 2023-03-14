/*
برنامج فيه array تحتوي على 10 أرقام، يطلب من المستخدم إدخال رقم ويقوم بالبحث داخل ال array عن مكان هذا الرقم ( the number's index ) ويطبع ترتيب هذا الرقم على الشاشة. ( advanced question )

*/

#include <stdio.h>
int main()
{
	int arr[10], number;

	printf("Enter 10 numbers\n");
	
	for(int i = 0; i < 10; i++)
	{
		scanf("%i",&arr[i]);
	}

	printf("Enter your number to Search\n");
	scanf("%i",&number);

	for(int i = 0; i < 10; i++)
	{
		if(number == arr[i])
		{
			printf("Found in %i\n",i);
			return 0;
		}
	}
	printf("Not Found\n");


	return 0;
}