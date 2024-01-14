#include <stdio.h>

int char_to_ascii(char s)
{
  return s;
}

int main()
{
  char s;
  scanf("%c", &s);

  int res = char_to_ascii(s);
  printf("%d\n", res);

  return 0;
}