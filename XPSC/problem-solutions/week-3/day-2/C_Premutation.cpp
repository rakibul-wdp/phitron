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

    int arr[n][n - 1];
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < (n - 1); j++)
      {
        cin >> arr[i][j];
        if (j == 0)
          v.push_back(arr[i][j]);
      }
    }

    sort(v.begin(), v.end());

    int first;
    for (int i = 1; i < v.size(); i++)
      if (v[i - 1] == v[i])
      {
        first = v[i - 1];
        break;
      }

    int index = 0;
    for (int i = 0; i < n; i++)
      if (arr[i][0] != first)
        index = i;

    cout << first << " ";

    for (int i = 0; i < n - 1; i++)
      cout << arr[index][i] << " ";

    cout << "\n";
  }

  return 0;
}