#include <stdio.h>

int fun(char s[], int i)
{
  if (s[i] == '\0')
    return 0;

  int l = fun(s, i + 1);
  return l + 1;
}

int main()
{
  char s[100];
  scanf("%s", s);

  int res = fun(s, 0);
  printf("%d", res);

  return 0;
}