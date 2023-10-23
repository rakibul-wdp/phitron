#include <stdio.h>

int main()
{
  int i, n;

  scanf("%d", &n);

  for (i = 0; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d", i);
      printf(" =>even\n");
    }
    else
    {
      printf("%d", i);
      printf(" =>odd\n");
    }
  }

  return 0;
}