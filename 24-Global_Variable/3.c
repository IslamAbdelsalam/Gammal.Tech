#include <stdio.h>
void summation(int x, int y);

int sum;

int main(){

  int n1, n2;

  printf("Enter different numbers:\n");

  scanf("%i%i",&n1,&n2);
  summation( n1, n2);

}


void summation(int x, int y)
{
  if( x > y )
  {
    for ( int i = x; i >= y; i--)
      {
        printf("%i\n",i);
        sum += i;
      }
  }
  else if(y > x)
  {
    for ( int i = x; i <= y; i++)
      {
        printf("%i\n",i);
        sum += i;
      }
  }
  else
  {
    printf("Enter different numbers\n");
  }

  printf("Sum of numbers : %i\n",sum);

}