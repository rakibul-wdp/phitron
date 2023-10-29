#include <stdio.h>

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  int count[7] = {0};
  for (int i = 0; i < n; i++)
  {
    count[arr[i]]++;
  }

  for (int i = 0; i <= 6; i++)
  {
    if (count[i] != 0)
      printf("%d\n", count[i]);
  }

  return 0;
}