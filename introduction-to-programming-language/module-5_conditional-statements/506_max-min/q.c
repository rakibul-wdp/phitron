#include <stdio.h>

int main()
{
  int num = 5;
  char c = 'z';
  printf("%c", c);
  if (num > 10)
  {
    printf("Greater than 10");
  }
  else if (num < 10)
  {
    printf("Less than 10");
  }
  else
  {
    printf("Equal to 10");
  }

  return 0;
}