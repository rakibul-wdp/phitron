#include <stdio.h>
#include <string.h>

int main()
{
  char arr[18];

  fgets(arr, 18, stdin);

  printf("%s", arr);

  return 0;
}