#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k, lan;
    cin >> n >> k >> lan;

    int min = -1, l = -1, sum = 0;

    vector<int> store;

    for (int i = 0; i < n; i++)
    {
      cin >> min;
      cin >> l;
      if (l == lan)
        store.push_back(min);
    }

    sort(store.begin(), store.end(), greater<int>());

    if (store.size() < k)
      cout << "-1"
           << "\n";
    else
    {
      for (int i = 0; i < k; i++)
        sum = sum + store[i];
      cout << sum << "\n";
    }
  }

  return 0;
}