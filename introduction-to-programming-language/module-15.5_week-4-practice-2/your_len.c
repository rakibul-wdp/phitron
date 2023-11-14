#include <stdio.h>

int your_len(char s)
{
  return s;
}

int main()
{
  char s;
  scanf("%s", s);

  int res = your_len(s);
  printf("%d\n", res);

  return 0;
}