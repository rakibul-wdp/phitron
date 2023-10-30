#include <stdio.h>
#include <string.h>

int main()
{
  char a[1001];
  scanf("%s", a);

  int flag = 1;

  int i = 0,
      j = strlen(a) - 1;
  while (i < j)
  {
    if (a[i] == a[j])
    {
      i++;
      j--;
    }
    else
    {
      flag = 0;
      break;
    }
  }

  if (flag)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}