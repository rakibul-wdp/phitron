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
    vector<pair<int, int>> heights;
    vector<pair<int, int>> main_heights;
    for (int i = 0; i < n; i++)
    {
      int height;
      cin >> height;
      heights.push_back({height, i});
      main_heights.push_back({height, i});
    }

    sort(heights.begin(), heights.end());

    for (pair value : main_heights)
    {
      if (heights[n - 2].second == value.second)
        cout << value.second << " ";

      if (heights[n - 1].second == value.second)
        cout << value.second << " ";
    }

    cout << endl;
  }

  return 0;
}