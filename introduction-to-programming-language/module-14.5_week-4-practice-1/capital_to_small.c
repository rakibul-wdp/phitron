#include <stdio.h>

char capital_to_small(char s)
{
  char small = s + 32;

  return small;
}

int main()
{
  char s;
  scanf("%c", &s);

  char res = capital_to_small(s);
  printf("%c\n", res);

  return 0;
}