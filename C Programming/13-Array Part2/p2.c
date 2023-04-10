/*
برنامج يطلب من الشخص أن يدخل 10 أرقام، إذا وجد أن هناك رقم من الأرقام المدخلة = 5 يطبع له " found " و إذا لم يجد يطبع " not found " و بعدما ينتهى البرنامج يعاد مرة أخرى من تلقاء نفسه.
*/

#include <stdio.h>
int main()
{
	while (1)
	{
		float arr[10];
		char ans;

		for (int i = 0; i < 10; i++)
		{
			scanf("%f", &arr[i]);
			if (arr[i] == 5)
			{
				printf("Found\n");
				break;
			}
		}

		printf("Do you want to continue?(y/n)\n");
		scanf(" %c", &ans);

		//		printf("%c",ans);
		if (ans == 'n')
		{
			printf("bye\n");
			return 0;
		}
	}
}
