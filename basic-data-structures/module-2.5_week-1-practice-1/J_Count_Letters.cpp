#include <bits/stdc++.h>
using namespace std;

int main()
{
  char a;

  int count[26] = {0};
  while ((cin >> a))
  {
    count[a - 'a']++;
  }

  for (int i = 0; i < 26; i++)
  {
    if (count[i] != 0)
      cout << char(i + 'a') << " : " << count[i] << endl;
    count[i] = 0;
  }

  return 0;
}