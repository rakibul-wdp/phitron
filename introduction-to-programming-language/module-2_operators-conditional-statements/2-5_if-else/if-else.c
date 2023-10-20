#include <stdio.h>

int main() {
  int money;

  scanf("%d", &money);

  if (money >= 100) {
    printf("Will eat Burger");
  } else {
    printf("Won't");
  }

  printf("\n");
  return 0;
}