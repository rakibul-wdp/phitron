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
    long long arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    long long arrB[33] = {0};

    for (int i = 0; i < n; i++)
    {
      long long z = arr[i];
      int c = 0;
      while (z > 0)
      {
        z = z / 2;
        c++;
      }
      arrB[c]++;
    }

    long long s = 0;

    for (int i = 0; i <= 32; i++)
    {
      if (arrB[i] >= 2)
        s = s + (arrB[i] * (arrB[i] - 1) / 2);
    }

    cout << s << endl;
  }

  return 0;
}