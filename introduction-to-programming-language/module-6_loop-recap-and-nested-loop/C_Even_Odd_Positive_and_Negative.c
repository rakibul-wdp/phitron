#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int even = 0, odd = 0, pos = 0, neg = 0;
  for (int i = 1; i <= n; i++)
  {
    int nums;
    scanf("%d", &nums);

    if (nums % 2 == 0)
      even++;
    else
      odd++;

    if (nums > 0)
      pos++;
    else if (nums < 0)
      neg++;
  }

  printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);

  return 0;
}