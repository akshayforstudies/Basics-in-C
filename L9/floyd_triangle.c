
// C Program to write floyd's triangle   //
#include <stdio.h>
 
int main()
{
  int n, i,  c, a = 1;
 
  printf("Enter the number of rows of Floyd's triangle to print\n");
  scanf("%d", &n);
 
  for (i = 1; i <= n; i++)
  {
    for (c = 1; c <= i; c++)
    {
      printf("%d ",a);
      a++;
    }
    printf("\n");
  }
 
  return 0;
}// compile using gcc -Wall floyd_triangle.c -o floyd_triangle.exe
