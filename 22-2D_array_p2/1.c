/*
 برنامج يطلب من الشخص يدخله رقمين يعبروا عن حجم ال 2D array و يسجل الارقام اللى هيكتبها و يطبعها فى الاخر
 */

#include <stdio.h>
int main(void)
{
  int x, y;
  printf("Enter the dimintions of 2D array: \n");
  scanf("%i%i",&x,&y);

  int arr[x][y];

  printf("Enter array content: \n");

  for ( int i = 0; i < x; i++)
    for ( int j = 0; j < y; j++)
        scanf("%i",&arr[i][j]);

  
  for ( int i = 0; i < x; i++)
  {
    for ( int j = 0; j < y; j++)
    {
        printf("%i\t",arr[i][j]);
    }      
    printf("\n");
  }


       
}