#include <stdio.h>
#include <string.h>

int main()
{
  char arr[100];
  scanf("%s", arr);

  int consonant = 0;
  for (int i = 0; i < strlen(arr); i++)
  {
    if (arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o' && arr[i] != 'u')
      consonant++;
  }

  printf("%d", consonant);

  return 0;
}