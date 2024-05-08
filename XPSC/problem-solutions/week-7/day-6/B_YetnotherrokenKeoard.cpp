#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;

    int n = s.size();

    vector<int> cap, sml;
    vector<bool> ok(n + 2, true);

    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'b')
      {
        if (!sml.empty())
        {
          ok[sml.back()] = false;
          sml.pop_back();
        }

        ok[i] = false;
      }
      else if (s[i] == 'B')
      {
        if (!cap.empty())
        {
          ok[cap.back()] = false;
          cap.pop_back();
        }

        ok[i] = false;
      }
      else if (s[i] >= 'A' and s[i] <= 'Z')
        cap.push_back(i);
      else
        sml.push_back(i);
    }

    for (int i = 0; i < n; i++)
    {
      if (ok[i])
        cout << s[i];
    }

    cout << "\n";
  }

  return 0;
}