#include <stdio.h>

int main()
{
  long long a, b, c;
  scanf("%lld %lld %lld", &a, &b, &c);

  long long t1 = a / 1;
  long long t2 = b / 1;
  long long t3 = c / 1;

  long long min = t1;
  if (min > t2)
    min = t2;
  if (min > t3)
    min = t3;

  if (((a - min) / 2) <= (c - min))
    printf("%lld\n", min + ((a - min) / 2));
  else if ((a - min) >= ((c - min) * 2))
    printf("%lld\n", min + (b - min));
  else
    printf("%d\n", 0);

  return 0;
}