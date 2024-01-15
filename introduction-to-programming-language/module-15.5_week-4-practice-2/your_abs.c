#include <stdio.h>
#include <stdlib.h>

int your_abs(int n)
{
  int ab = abs(n);

  return ab;
}

int main()
{
  int n;
  scanf("%d", &n);

  int res = your_abs(n);
  printf("%d", res);

  return 0;
}