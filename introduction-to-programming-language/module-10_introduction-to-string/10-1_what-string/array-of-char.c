#include <stdio.h>

int main()
{
  char arr[5];
  int siz = sizeof(arr) / sizeof(char);
  printf("%d", siz);

  return 0;
}