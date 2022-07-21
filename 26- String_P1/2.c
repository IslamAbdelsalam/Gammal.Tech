/*
برنامج يسأل المستخدم عن اسمه الاول و اسم العائلة و يطبع الاسمين جنب بعض و بينهم مسافة
*/

#include <stdio.h>

int main(void)
{
  char firstName[100], lastName[100];

  printf("Enter your first name: ");
  scanf("%s",firstName);

  printf("Enter your first name: ");
  scanf("%s",lastName);  

  printf("%s %s\n",firstName,lastName);
  
  return 0;
}