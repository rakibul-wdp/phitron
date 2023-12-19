#include <stdio.h>

void fun(int *arr, int n)
{
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\n");

  arr[0] = 500;
}

void myFun(char *a)
{
  a[0] = 'G';
}

int main()
{
  int arr[5] = {9, 8, 7, 6, 5};
  fun(arr, 5);

  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }

  char a[] = "Hello";
  myFun(a);
  printf("%s", a);

  return 0;
}