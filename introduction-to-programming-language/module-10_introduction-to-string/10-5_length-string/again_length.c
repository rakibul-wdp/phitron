#include <stdio.h>
#include <string.h>

int main()
{
  char a[100];
  scanf("%s", a);

  int st = strlen(a);

  printf("%d", st);

  return 0;
}