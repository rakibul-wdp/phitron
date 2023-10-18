#include <stdio.h>

int main()
{
  char arr_a[10];
  scanf("%s", &arr_a);

  char arr_b[10];

  for (int i = 0; i <= strlen(arr_a); i++)
  {
    arr_b[i] = arr_a[i];
  }

  printf("%s", arr_b);

  return 0;
}