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

    int biggestTwo = 1;

    while (biggestTwo * 2 <= n)
    {
      biggestTwo = biggestTwo * 2;
    }

    cout << biggestTwo - 1 << "\n";
  }

  return 0;
}