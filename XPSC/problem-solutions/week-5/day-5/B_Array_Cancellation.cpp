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

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    long long s = 0;
    for (int i = 0; i < n; i++)
    {
      s = s + arr[i];
      if (s < 0)
        s = 0;
    }

    cout << s << endl;
  }

  return 0;
}