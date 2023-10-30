#include <stdio.h>
#include <string.h>

int main()
{
  char arr[100];
  scanf("%s", arr);

  int consonant = 0;
  for (int i = 0; i < strlen(arr); i++)
  {
    if (arr[i] != 'a')
      consonant++;
    else if (arr[i] != 'e')
      consonant++;
    else if (arr[i] != 'i')
      consonant++;
    else if (arr[i] != 'o')
      consonant++;
    else if (arr[i] != 'u')
      consonant++;
  }

  printf("%d", consonant);

  return 0;
}