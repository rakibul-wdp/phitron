#include <stdio.h>

void fun(int x)
{
  x = 200;
}

int main()
{
  int n = 10;
  printf("main x address %p\n", &n);
  fun(n);
  printf("%d\n", n);

  return 0;
}