#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int m1, m2, d;
  for (int i = 1; i <= n; i++)
  {
    scanf("%d %d %d", &m1, &m2, &d);

    int res = d - ((m1 * d) / (m1 + m2));

    printf("%d\n", res);
  }

  return 0;
}