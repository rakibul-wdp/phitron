#include <stdio.h>

char small_to_capital(char s)
{
  char cap = s - 32;
  return cap;
}

int main()
{
  char s;
  scanf("%c", &s);

  char res = small_to_capital(s);
  printf("%c", res);

  return 0;
}