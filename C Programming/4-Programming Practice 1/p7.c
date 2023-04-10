
#include <stdio.h>

int main(){
	int nails,n_tables,n_chairs;
	
	printf("How many chairs and tables you will make?\n");
	scanf("%i%i",&n_chairs,&n_tables);

	printf("You will need %i nail to make your chairs\n"
		   "and %i for your tables\n",n_chairs*25,n_tables*30);

		   return 0;
}