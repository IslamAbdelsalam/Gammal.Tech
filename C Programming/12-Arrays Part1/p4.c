#include <stdio.h>
int main(){

	float arr[10]={1,2,3,4,5,6,7,8,9,10};

	for(int i = 0; i < 10; i+=2){
		printf("%0.1f\n",arr[i]);
	}

	return 0;
}