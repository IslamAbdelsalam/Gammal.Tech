#include <stdio.h>
int main(){
	float arr[10], sum = 0;

	printf("Enter 10 numbers\n");
	
	for(int i = 0; i < 10; i++){
		scanf("%f",&arr[i]);
		sum += arr[i];
	}

	for(int i = 0; i < 10; i++){
		printf("%0.1f\n",arr[i]);
	}
	printf("Sum = %0.1f\n",sum);



	return 0;
}