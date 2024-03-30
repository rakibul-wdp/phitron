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
    string s;
    cin >> s;

    long long score = 0;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'L')
        score += i;
      else
        score += (n - i - 1);
    }

    priority_queue<int> pq;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'L')
      {
        int current = i;
        int change = (n - i - 1);

        pq.push(change - current);
      }
      else
      {
        int current = (n - i - 1);
        int change = i;

        pq.push(change - current);
      }
    }

    for (int i = 0; i < n; i++)
    {
      int tp = pq.top();
      pq.pop();

      if (tp > 0)
        score += tp;

      cout << score << " ";
    }

    cout << "\n";
  }

  return 0;
}