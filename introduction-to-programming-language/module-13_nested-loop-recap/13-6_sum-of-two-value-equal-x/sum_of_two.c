#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  int x;
  scanf("%d", &x);

  int a, b;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] + arr[j] == x)
      {
        a = arr[i];
        b = arr[j];
      }
    }
  }

  printf("%d %d", a, b);

  return 0;
}