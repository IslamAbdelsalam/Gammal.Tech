#include <stdio.h>

int main()
{
  char name[100], age[4];

  printf("Enter your name: ");
  for(int i = 0; i < 100; i++)
  {
      scanf("%c",&name[i]);
      if( name[i] == 10 )
        {
          name[i] = '\0';
          break;
        }
      else
        continue;    
  }     


  printf("Enter your age: ");
  scanf("%s",age);

  printf("%s %s years old\n",name,age);

  return 0;
}