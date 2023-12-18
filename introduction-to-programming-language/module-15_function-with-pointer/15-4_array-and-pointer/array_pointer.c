#include <stdio.h>

int main()
{
  int arr[5] = {9, 8, 7, 6, 5};
  printf("0th index address %p\n", &arr[0]);
  printf("0th index address %p\n", &arr);
  printf("0th index value %d\n", arr[0]);
  printf("0th index value %d\n", *arr);

  printf("%d\n", *(arr + 1));
  printf("%d\n", *(1 + arr));
  printf("%d\n", arr[1]);
  printf("%d\n", 1 [arr]);

  return 0;
}