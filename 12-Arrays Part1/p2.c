#include <stdio.h>
int main(){
        int n;
        
        printf("How many number you will enter?\n");
        scanf("%i",&n);
	
        float arr[n], sum = 0;
	
	for(int i = 0; i < n; i++){
		scanf("%f",&arr[i]);
		sum += arr[i];
	}

	for(int i = 0; i < n; i++){
		printf("%0.1f\n",arr[i]);
	}
	printf("Sum = %0.1f\n",sum);

	return 0;
}