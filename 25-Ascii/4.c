//برنامج يطبع الفرق بين 'A' و 'a'

#include <stdio.h>

int main(void)
{
 char c = 'A', b = 'a';
 printf(" A - a = %i\n",c-b);
 printf(" a - A =  %i\n",b-c);

  return 0;
}