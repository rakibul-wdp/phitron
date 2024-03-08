#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int q;
  cin >> q;

  priority_queue<int> pq;
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
        cout << "empty\n";
      else
      {
        cout << pq.top() << "\n";
        int max_val = pq.top();
        while (!pq.empty() && pq.top() == max_val)
        {
          pq.pop();
        }
      }
    }
  }

  return 0;
}