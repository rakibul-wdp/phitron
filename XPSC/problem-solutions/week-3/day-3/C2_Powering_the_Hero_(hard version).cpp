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

    int arr[n];
    long long ans = 0;
    priority_queue<int> pq;

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];

      if (arr[i])
        pq.push(arr[i]);
      else
      {
        if (!pq.empty())
        {
          ans += pq.top();
          pq.pop();
        }
      }
    }

    cout << ans << "\n";
  }

  return 0;
}