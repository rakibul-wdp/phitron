#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int q;
  cin >> q;

  priority_queue<int, vector<int>, greater<int>> pq;
  while (q--)
  {
    int x;
    cin >> x;

    if (x == 1)
    {
      int y;
      cin >> y;
      pq.push(y);
    }
    else if (x == 2)
    {
      if (pq.empty())
      {
        cout << "empty\n";
      }
      else
      {
        cout << pq.top() << "\n";
        int min_val = pq.top();
        while (!pq.empty() && pq.top() == min_val)
        {
          pq.pop();
        }
      }
    }
  }

  // vector<int> v;
  // while (q--)
  // {
  //   int x, y;
  //   cin >> x;

  //   if (x == 1)
  //   {
  //     cin >> y;
  //     auto it = find(v.begin(), v.end(), y);

  //     if (it == v.end())
  //       v.push_back(y);
  //   }

  //   else if (x == 2)
  //   {
  //     if (v.empty())
  //       cout << "empty\n";

  //     sort(v.begin(), v.end());
  //     cout << v[0] << "\n";
  //     v.erase(v.begin());
  //   }
  // }

  return 0;
}