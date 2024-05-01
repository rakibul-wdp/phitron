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

    string s[3][n];
    map<string, int> freq;

    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> s[i][j];
        freq[s[i][j]]++;
      }
    }

    int point[3] = {0};

    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (freq[s[i][j]] == 1)
          point[i] += 3;
        else if (freq[s[i][j]] == 2)
          point[i]++;
      }
    }

    for (int i = 0; i < 3; i++)
      cout << point[i] << " ";
    cout << "\n";
  }

  return 0;
}