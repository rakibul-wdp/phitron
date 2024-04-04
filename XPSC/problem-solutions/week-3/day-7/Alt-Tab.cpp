#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  stack<string> s;

  for (int i = 0; i < n; i++)
  {
    string tabName;
    cin >> tabName;
    s.push(tabName);
  }

  set<string> ans;

  while (!s.empty())
  {
    if (ans.find(s.top()) == ans.end())
    {
      ans.insert(s.top());
      string tab = s.top();

      if (tab.size() > 2)
        cout << tab.substr(tab.size() - 2);
    }

    s.pop();
  }

  return 0;
}