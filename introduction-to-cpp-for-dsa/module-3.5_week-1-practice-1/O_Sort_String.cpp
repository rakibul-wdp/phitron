#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  char s[n];
  for (int i = 0; i < n; i++)
    cin >> s[i];

  int count[26] = {0};
  for (int i = 0; i < n; i++)
  {
    int value = s[i] - 'a';
    count[value]++;
  }

  for (int i = 0; i < 26; i++)
  {
    // int value = s[i] - 'a';
    if (count[i] != 0)
      printf("%c - %d\n", i + 'a', count[i]);
    // count[i] = 0;
  }

  return 0;
}