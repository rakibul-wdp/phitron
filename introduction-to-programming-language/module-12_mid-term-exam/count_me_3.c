#include <stdio.h>
#include <string.h>

int main()
{
  int n;
  scanf("%d", &n);
  char s[10001];
  for (int i = 1; i <= n; i++)
  {
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++)
    {
      printf("%d", s[i]);
    }
  }

  return 0;
}