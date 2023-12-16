#include <stdio.h>

int main()
{
  int n = 10;
  printf("%p\n", &n);

  int *p = &n;

  printf("%p\n", p);

  // dereference
  printf("%d\n", *p);
  *p = 500;

  printf("%p\n", p);
  printf("%d\n", n);

  return 0;
}