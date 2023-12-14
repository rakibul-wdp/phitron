#include <stdio.h>

int times(int x, int y)
{
  int times = x * y;
  return times;
}

int sum(int x, int y);

int main()
{
  int res = times(5, 3);
  printf("%d", res);

  int result = sum(5, 3);
  printf("%d", result);

  return 0;
}

int sum(int x, int y)
{
  int sum_x_y = x + y;
  return sum_x_y;
}