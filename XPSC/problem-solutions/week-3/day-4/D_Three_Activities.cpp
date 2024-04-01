#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<pair<int, int>> arr1(n), arr2(n), arr3(n);

    for (int i = 0; i < n; i++)
    {
      cin >> arr1[i].first;
      arr1[i].second = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
      cin >> arr2[i].first;
      arr2[i].second = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
      cin >> arr3[i].first;
      arr3[i].second = i + 1;
    }

    sort(arr1.begin(), arr1.end(), greater<>());
    sort(arr2.begin(), arr2.end(), greater<>());
    sort(arr3.begin(), arr3.end(), greater<>());

    int ans = 0;

    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        for (int k = 0; k < 3; k++)
          if (arr1[i].second != arr2[j].second && arr1[i].second != arr3[k].second && arr2[j].second != arr3[k].second)
            ans = max(arr1[i].first + arr2[j].first + arr3[k].first, ans);
      }
    }

    cout << ans << "\n";
  }

  return 0;
}