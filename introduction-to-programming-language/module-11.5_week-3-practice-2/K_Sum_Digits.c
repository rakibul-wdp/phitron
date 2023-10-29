#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  char arr[21];
  for (int i = 0; i < n; i++)
    scanf("%s", arr);

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i] - 48;
  }

  printf("%d", sum);

  return 0;
}