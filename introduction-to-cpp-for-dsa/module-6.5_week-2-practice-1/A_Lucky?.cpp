#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    string s;
    cin >> s;

    int first_sum = 0, second_sum = 0;
    for (int i = 0; i < s.size() / 2; i++)
      first_sum += s[i] - '0';

    for (int i = 3; i < s.size(); i++)
      second_sum += s[i] - '0';

    first_sum == second_sum ? cout << "YES" << endl : cout << "NO" << endl;
  }

  return 0;
}