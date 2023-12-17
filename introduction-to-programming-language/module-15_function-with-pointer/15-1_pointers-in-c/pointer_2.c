#include <stdio.h>

int main()
{
  double x = 5.25;
  double *ptr = &x;
  double *ptr2 = ptr;
  *ptr2 = 10.20;

  printf("x %0.2lf\n", x);
  printf("p %0.2lf\n", *ptr2);

  return 0;
}