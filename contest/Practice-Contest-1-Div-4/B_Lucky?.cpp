#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;

    int sum_first_half = 0;
    for (int i = 0; i < s.size() / 2; i++)
      sum_first_half += s[i];

    int sum_second_half = 0;
    for (int i = 3; i < s.size(); i++)
      sum_second_half += s[i];

    if (sum_first_half == sum_second_half)
      cout << "YES"
           << "\n";
    else
      cout << "NO"
           << "\n";
  }

  return 0;
}