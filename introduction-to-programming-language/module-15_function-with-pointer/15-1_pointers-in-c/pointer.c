#include <stdio.h>

int main()
{
  int x = 100;
  int *ptr = &x;

  printf("x address: %p\n", &x);
  printf("ptr value: %p\n", ptr);
  printf("ptr value: %p\n", &ptr);

  return 0;
}