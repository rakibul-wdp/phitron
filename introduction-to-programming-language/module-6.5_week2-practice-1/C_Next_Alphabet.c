#include <stdio.h>

int main()
{
  char c;
  scanf("%c", &c);

  char cint = (int)(c);

  if (cint == 122)
    printf("%c", (char)(97));
  else
    printf("%c", (char)(cint + 1));

  return 0;
}