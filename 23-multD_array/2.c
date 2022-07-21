/*
برنامج يطلب من الشخص يدخله 10 ارقام و لو لقى فى رقم من اللى دخلهم = 5 يطبعله " found " و لو مش موجود يطبع " not found " و بعد البرنامج ما يخلص يتعاد تانى لوحده
*/

#include <stdio.h>

int main(void)
{
  while(1)
  {
      int arr[10], counter = 0;
      
      for ( int i = 0; i < 10; i++)
      {
        scanf("%i",&arr[i]);
        if ( arr[i] == 5 )
          counter++;
      }
      if(counter > 0)
        printf("Found\n");
      else
        printf("Not Found\n");
  }
}