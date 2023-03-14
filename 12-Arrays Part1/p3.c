#include <stdio.h>
int main(){
	float arr[10];

	printf("Enter 10 numbers\n");
	
	for(int i = 0; i < 10; i++)
		scanf("%f",&arr[i]);
	

	for(int i = 9; i >= 0; i--){
		printf("%0.1f\n",arr[i]);
	}

	return 0;
}