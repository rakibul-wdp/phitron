#include <stdio.h>

void times(void)
{
  int a, b;
  scanf("%d %d", &a, &b);

  int res = a * b;
  printf("%d", res);
}

int main()
{
  times();

  return 0;
}