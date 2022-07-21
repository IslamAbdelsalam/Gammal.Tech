#include <stdio.h>

int main(void)
{
  int n;
  printf("How many numbers will you Enter?\n");
  scanf("%i",&n);
  int  arr[n],counter = 0;

  for (int i = 0; i < n; i++)
  {
      scanf("%i",&arr[i]);
      if ( arr[i] == 5 )
        counter++;
  }

  if ( counter > 0 )
    printf("Found\n");
  else
    printf("Not found\n");

  return 0;    
}