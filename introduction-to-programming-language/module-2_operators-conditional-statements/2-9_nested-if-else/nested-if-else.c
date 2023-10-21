#include <stdio.h>

int main() {
  int money;

  scanf("%d", &money);

  if (money >= 5000) {
    printf("Will go cox's bazar \n");
    if (money >= 10000) {
      printf("will go saint martin");
    } else {
      printf("come back from cox's bazar");
    }
  } else {
    printf("won't go");
  }

  return 0;
}