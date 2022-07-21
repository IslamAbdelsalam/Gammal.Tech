#include <stdio.h>

int main()
{
  int x, y, z;
  
  printf("Enter 3 numbers that will be the dimensions of the array:\n");

  scanf("%i%i%i",&x,&y,&z);

  int arr[x][y][z];

  for ( int i = 0; i < x; i++ )
    for ( int j = 0; j < x; j++ )
      for ( int k = 0; k < x; k++ )
          scanf("%i",&arr[i][j][k]);

printf("Array Numbers: \n");
  for ( int i = 0; i < x; i++ )
    for ( int j = 0; j < x; j++ )
      for ( int k = 0; k < x; k++ )
          printf("%i\t",arr[i][j][k]);     

  return 0;

}
