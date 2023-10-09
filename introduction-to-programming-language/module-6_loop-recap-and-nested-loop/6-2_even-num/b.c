#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
      printf("%d\n", i);
  }
  if (n == 1)
    printf("%d\n", -1);

  return 0;
}