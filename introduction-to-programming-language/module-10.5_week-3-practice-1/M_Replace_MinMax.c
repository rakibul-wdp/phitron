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

  int min = arr[0], max = arr[0], min_index, max_index;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
      min_index = i;
    }

    if (arr[i] > max)
    {
      max = arr[i];
      max_index = i;
    }
  }

  arr[min_index] = max;
  arr[max_index] = min;

  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}