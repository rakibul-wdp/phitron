#include <stdio.h>
#include <string.h>

int main()
{
  char ch[6];
  // scanf("%s", &ch);
  // gets(ch);
  fgets(ch, 6, stdin);

  printf("%s %d %d\n", ch, strlen(ch), sizeof(ch));

  return 0;
}