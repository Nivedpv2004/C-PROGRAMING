//program for fibonacci series
#include <stdio.h>
int main()
{
  int x = 1, y = 0, i;
  printf("Series: ", x, y);
  i=x+y;
  while (i <= 150)
  {
    printf("%d, ", i);
    x = y;
    y = i;
    i = x+y;
  }

  return 0;
}
