#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, curr, ticket;
  cin >> n >> m;

  multiset<int, greater<int>> tickets;

  while (n--)
  {
    cin >> ticket;
    tickets.insert(ticket);
  }

  while (m--)
  {
    cin >> curr;
    auto it = tickets.lower_bound(curr);

    if (it == tickets.end())
      cout << -1 << "\n";
    else
    {
      cout << *it << "\n";
      tickets.erase(it);
    }
  }

  return 0;
}