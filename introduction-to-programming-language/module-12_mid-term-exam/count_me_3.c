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

    int capital = 0, small = 0, number = 0;
    for (int i = 0; i < strlen(s); i++)
    {
      if (s[i] >= 65 && s[i] <= 90)
        capital++;
      else if (s[i] >= 97 && s[i] <= 122)
        small++;
      else if (s[i] >= 48 && s[i] <= 57)
        number++;
    }
    printf("%d %d %d\n", capital, small, number);
  }

  return 0;
}