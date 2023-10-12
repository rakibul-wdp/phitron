#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  if (sum < 0)
    printf("%d", sum * -1);
  else
    printf("%d", sum);

  return 0;
}