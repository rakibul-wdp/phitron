#include <stdio.h>

void fun(int *p)
{
  *p = 200;
  printf("p value %p\n", p);
}

int main()
{
  int x = 100;
  printf("x address %p\n", &x);
  fun(&x);
  printf("%d\n", x);

  return 0;
}