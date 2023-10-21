#include <stdio.h>

int main() {
  int money;

  scanf("%d", &money);

  if (money >= 5000) {
    printf("Will go coxbazar \n");
    if (money >= 10000) {
      printf("will go centmartin");
    } else {
      printf("come back from coxbazar");
    }
  } else {
    printf("won't go");
  }

  return 0;
}