#include <stdio.h>

int sum(int x, int y)
{
  int sum_x_y = x + y;
  return sum_x_y;
}

int main()
{
  int res = sum(5, 8);
  printf("%d", res);

  return 0;
}