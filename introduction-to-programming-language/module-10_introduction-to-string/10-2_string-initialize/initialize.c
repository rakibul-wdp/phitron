#include <stdio.h>

int main()
{
  // int arr[5] = {'a', 'b', 'u', 'l', 'b'};
  char arr[6] = "Abulb";

  int siz = sizeof(arr) / sizeof(char);
  printf("%d ", siz);

  printf("%s", arr);

  return 0;
}