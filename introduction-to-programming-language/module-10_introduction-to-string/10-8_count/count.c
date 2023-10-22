#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    int m;
    scanf("%d", &m);
    int arr[m];
    for (int i = 0; i < m; i++)
    {
      scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    for (int i = 0; i < m; i++)
    {
      if (arr[i] == x)
        printf("YES\n");
      else
        printf("NO\n");
    }
  }

  return 0;
}
