#include <bits/stdc++.h>
using namespace std;

bool isVowel(char a)
{
  if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    return true;
  return false;
}

int main()
{
  string S, T;
  cin >> S;
  cin >> T;

  if (S.size() != T.size())
  {
    cout << "No\n";
    return 0;
  }

  int flag = 1;
  for (int i = 0; i < S.size(); ++i)
  {
    if ((isVowel(S[i]) && isVowel(T[i])) || (isVowel(S[i]) == false && isVowel(T[i]) == false))
      continue;
    flag = 0;
    break;
  }

  if (flag)
    cout << "Yes\n";
  else
    cout << "No\n";

  return 0;
}