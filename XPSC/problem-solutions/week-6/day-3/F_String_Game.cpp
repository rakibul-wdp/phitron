#include <bits/stdc++.h>
using namespace std;

bool possible(int *arr, int mid, string t, string p)
{
  unordered_set<int> hs;
  for (int i = 0; i < mid; i++)
    hs.insert(arr[i]);

  string res = "";

  for (int i = 0; i < t.length(); i++)
    if (hs.find(i) == hs.end())
      res += t[i];

  int p1 = 0, p2 = 0;

  while (p1 < res.length() && p2 < p.length())
  {
    if (res[p1] == p[p2])
    {
      p1++;
      p2++;
    }
    else
      p1++;
  }

  return (p2 == p.length());
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string t, p;
    cin >> t >> p;

    int arr[t.length()];
    for (int i = 0; i < t.length(); i++)
    {
      cin >> arr[i];
      arr[i] -= 1;
    }

    int lo = 0;
    int hi = t.length();

    while (hi > lo + 1)
    {
      int mid = (lo + hi) >> 1;

      if (possible(arr, mid, t, p))
        lo = mid;
      else
        hi = mid;
    }

    cout << lo << "\n";
  }

  return 0;
}