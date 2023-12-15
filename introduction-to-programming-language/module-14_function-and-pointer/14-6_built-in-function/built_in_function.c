#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  // float x;
  // scanf("%f", &x);

  // int res = ceil(x);
  // printf("%d", res);

  printf("%f\n", ceil(1.0001));
  printf("%f\n", floor(1.9999));

  printf("%f\n", round(3.5));

  printf("%f\n", sqrt(24));

  printf("%f\n", pow(3.5, 3));

  printf("%d\n", abs(-3.99));

  return 0;
}