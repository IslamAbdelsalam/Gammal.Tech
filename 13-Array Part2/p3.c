/*
برنامج يطلب من الشخص أن يدخل 10 ارقام و يحسب كم رقم من الأرقام المدخلة = 5  و إذا لم يجد يطبع " not found " و بعدما ينتهى البرنامج يعاد مرة أخرى من تلقاء نفسه.
*/

#include <stdio.h>
int main()
{
	while (1)
	{
		float arr[10];
		char ans;
		int counter = 0;

		for (int i = 0; i < 10; i++)
		{
			scanf("%f", &arr[i]);
			if (arr[i] == 5)
			{
				counter++;
			}
		}

		if (counter > 0)
		{
			printf("We found number 5 --> %i times\n", counter);
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
