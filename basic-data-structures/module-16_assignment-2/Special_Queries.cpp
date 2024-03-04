#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Write your code here
  queue<string> q;

  int t;
  cin >> t;
  while (t--)
  {
    int command;
    cin >> command;

    if (command == 0)
    {
      string name;
      cin >> name;

      q.push(name);
    }
    else
    {
      if (!q.empty())
      {
        cout << q.front() << endl;
        q.pop();
      }
      else
        cout << "Invalid" << endl;
    }
  }

  return 0;
}