#include <stdio.h>

int main() {
  int money;

  scanf("%d", &money);

  if (money >= 100) {
    printf("Will eat Burger");
  } else if (money >= 50) {
    printf("Will eat fchk");
  } else if (money >= 20) {
    printf("will eat ice cream");
  }
  else
  {
    printf("Won't");
  }

  return 0;
}