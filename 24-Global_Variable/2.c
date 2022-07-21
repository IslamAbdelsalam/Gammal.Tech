#include <stdio.h>
void write();

int x;

void fun(){
    printf("fun: %d\n",x);
}

int main(){
  scanf("%i",&x);
    printf("main: %d\n",x);
    fun();
    write();
    return 0;
}

void write(){
    printf("write: %d\n",x);
}