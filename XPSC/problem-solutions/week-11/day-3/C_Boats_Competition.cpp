#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  int arr[1001];
  int w[1001];

  while (t--)
  {
    int total = 200, ans = 0, cnt, res = 0;

    while (total--)
      arr[total] = 0;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
      cin >> w[i];

    sort(w, w + n);

    for (int k = 1; k < 101; k++)
    {
      int i = 0, j = n - 1, cnt = 0;
      while (i < j)
      {
        if (w[i] + w[j] == k)
        {
          i++, j--;
          cnt++;
        }
        else if (w[i] + w[j] < k)
          i++;
        else
          j--;
      }
      if (ans < cnt)
        ans = cnt;
    }

    cout << ans;
    cout << "\n";
  }

  return 0;
}