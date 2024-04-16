#include <bits/stdc++.h>
using namespace std;

vector<int> allPali;
void precompute()
{
  for (int i = 0; i < 32786; i++)
  {
    string s = to_string(i);
    string temp = s;
    reverse(s.begin(), s.end());

    if (temp == s)
      allPali.push_back(i);
  }
}

int main()
{
  precompute();

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    unordered_map<int, int> x;
    long long ans = 0;

    for (auto ele : arr)
    {
      x[ele]++;

      for (auto pali : allPali)
        ans += x[ele ^ pali];
    }

    cout << ans << "\n";
  }

  return 0;
}