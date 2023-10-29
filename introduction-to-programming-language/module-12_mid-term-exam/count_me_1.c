#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  int two_count = 0, three_count = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
      two_count++;
    else if (arr[i] % 2 == 0)
      two_count++;
    else if (arr[i] % 3 == 0)
      three_count++;
  }

  printf("%d %d", two_count, three_count);

  return 0;
}