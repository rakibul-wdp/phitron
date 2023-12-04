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

  int zero = 0, one = 0, two = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
      zero++;
    if (arr[i] == 1)
      one++;
    if (arr[i] == 2)
      two++;
  }

  printf("0 - %d\n", zero);
  printf("1 - %d\n", one);
  printf("2 - %d\n", two);

  return 0;
}

/*
13
5 0 1 4 0 2 3 4 6 5 0 2 3
*/