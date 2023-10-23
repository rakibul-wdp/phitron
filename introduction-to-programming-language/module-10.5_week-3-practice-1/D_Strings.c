#include <stdio.h>
#include <string.h>

int main()
{
  char a[11], b[11];
  scanf("%s %s", a, b);

  int a_size = strlen(a), b_size = strlen(b);
  printf("%d %d\n", a_size, b_size);
  printf("%s%s\n", a, b);

  int tmp = a[0];
  a[0] = b[0];
  b[0] = tmp;
  printf("%s %s\n", a, b);

  return 0;
}