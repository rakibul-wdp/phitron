#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int count[26] = {0};

  for (int i = 0; i < s.length(); i++)
  {
    int value = s[i] - 'a';
    count[value]++;
  }

  for (int i = 0; i < 26; i++)
    if (count[i] != 0)
      cout << char(i + 'a') << " : " << count[i] << "\n";

  return 0;
}