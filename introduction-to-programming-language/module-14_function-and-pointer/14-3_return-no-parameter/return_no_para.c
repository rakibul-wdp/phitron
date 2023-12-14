#include <stdio.h>

int sum(void)
{
  int a, b;
  scanf("%d %d", &a, &b);

  int sum = a + b;

  return sum;
}

int main()
{
  int res = sum();
  printf("%d", res);

  return 0;
}