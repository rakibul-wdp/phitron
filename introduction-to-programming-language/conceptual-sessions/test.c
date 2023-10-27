#include <stdio.h>

int main()
{
  for (int i = 1; i <= 10; i++)
  {
    if (i % 2 == 0)
      continue;
    if (i == 5)
      break;
    printf("Square of %d is %d\n", i, i * i);
  }

  return 0;
}