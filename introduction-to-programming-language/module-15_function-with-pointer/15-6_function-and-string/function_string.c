#include <stdio.h>
#include <string.h>

void fun(char *arr) // arr[] or *arr
{
  printf("%d\n", strlen(arr));
}

int main()
{
  char arr[10] = "Hello";
  fun(arr);

  return 0;
}