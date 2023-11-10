#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);

  for (int i = 1; i <= t; i++)
  {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &arr[i]);

    int x;
    scanf("%d", &x);

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == x)
        flag = 1;
    }

    if (flag)
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}