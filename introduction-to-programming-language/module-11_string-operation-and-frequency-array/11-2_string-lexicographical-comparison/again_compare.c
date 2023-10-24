#include <stdio.h>
#include <string.h>

int main()
{
  char a[100], b[100];
  scanf("%s %s", a, b);

  int value = strcmp(a, b);

  if (value < 0)
    printf("a is smaller\n");
  else if (value > 0)
    printf("b is small\n");
  else
    printf("same\n");

  return 0;
}