#include <stdio.h>
#include <string.h>

int main()
{
  char a[100], b[100];
  scanf("%s %s", a, b);

  int v = strcmp(a, b);
  if (v < 0)
    printf("a is smaller\n");
  else if (v > 0)
    printf("b is smaller\n");
  else
    printf("same\n");

  return 0;
}

/*
strcmp
1 -> b is small
0 -> same
-1 -> a is small
*/