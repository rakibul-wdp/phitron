#include <stdio.h>

int main() {
  // int num, num2;
  // char name;
  // float decimal;

  // scanf("%d %f %c", &num, &decimal, &name);
  // printf("%d %0.2f %c", num, decimal, name);

  // int percent, percent2;

  // scanf("%d%% %d%%", &percent, &percent2);
  // printf("%d%% %d%%", percent, percent2);

  char percentageInput[10];

  scanf("%s", percentageInput);

  int percentage = atoi(percentageInput);

  printf("%d%%", percentage);

  return 0;
}

/*
two way to take percent input
1. as a character
2. as a percentage
*/