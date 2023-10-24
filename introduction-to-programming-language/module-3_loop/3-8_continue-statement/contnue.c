#include <stdio.h>

int main()
{
  int i, n;

  for (i = 1; i <= 10; i++)
  {
    printf("%d\n", i);
    if (i == 5)
      continue;
    printf("%d\n", i);
  }

  return 0;
}