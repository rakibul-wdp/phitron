#include <stdio.h>

int main() {
  int num, num2;
  char name;
  float decimal;

  // scanf("%d %f %c", &num, &decimal, &name);
  // printf("%d %0.2f %c", num, decimal, name);

  int percent, percent2;
  char p;

  scanf("%d%c %d%c", &percent,&p, &percent2,&p);
  printf("%c", p);
  // printf("%d%% %d%%", percent, percent2);

  return 0;
}

/*
two way to take percent input
1. as a character
2. as a percentage
*/