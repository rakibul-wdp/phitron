#include <stdio.h>

int main() {
  int num, num2;
  char name;
  float decimal;

  scanf("%d %f %c", &num, &decimal, &name);
  printf("%d %0.2f %c", num, decimal, name);

  return 0;
}