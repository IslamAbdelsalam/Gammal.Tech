#include <stdio.h>

int main()
{
	char ans;
    int i;
	 while (1)
	 {
		float arr[10];
		for (i = 0; i < 10; i++)
		{
			scanf("%f", &arr[i]);
			if (arr[i] == 5)
			{
				printf("Found\n");
                break;
			}
		}

		printf("Do you want to continue?(y/n)\n");
		scanf(" %c",&ans);

//		printf("%c",ans);
		if (ans == 'n')
		{
			printf("bye\n");
			return 0;
		}
	 }
	return 0;
}