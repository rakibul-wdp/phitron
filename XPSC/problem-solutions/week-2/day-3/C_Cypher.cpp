#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCase;
  cin >> testCase;

  while (testCase--)
  {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      string s;
      cin >> s;

      for (char ch : s)
      {
        if (ch == 'D')
        {
          arr[i]++;
          if (arr[i] == 10)
            arr[i] = 0;
        }
        else
        {
          arr[i]--;
          if (arr[i] == -1)
            arr[i] = 9;
        }
      }
    }

    for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
    cout << "\n";
  }

  return 0;
}