
#include <stdio.h>

int main(){
	float s1, s2, s3, s4, s5;
	
	printf("Enter your results:\n");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);

	printf("your total score: %0.1f \nyou lose %0.1f grade\n ",s1+s2+s3+s4+s5,500-s1-s2-s3-s4-s5);

}