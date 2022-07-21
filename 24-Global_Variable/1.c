#include <stdio.h>
int x;
void fun(){
    printf("%d\n",x);
}
int main(){
  scanf("%i",&x);
    printf("%d\n",x);
    fun();
    return 0;
}