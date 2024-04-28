#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n, k;
  cin >> n >> k;

  int arr[101] = {};
  int ans = n;

  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    arr[tmp]++;
  }

  for (int &i : arr)
    if (i >= k)
    {
      cout << k - 1;
      return;
    }

  cout << n;
}

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    solve();
    cout << "\n";
  }

  return 0;
}

/*

long long n, k;
    cin >> n >> k;

    long long arr[101] = {};
    long long ans = n;

    for (long long i = 0; i < n; i++)
    {
      long long tmp;
      cin >> tmp;
      arr[tmp]++;
    }

    for (long long &i : arr)
      if (i >= k)
      {
        cout << k - 1;
        break;
      }

    cout << n << "\n";
*/