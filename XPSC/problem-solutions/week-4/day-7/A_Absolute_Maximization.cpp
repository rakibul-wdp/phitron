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
    int AND = -1, OR = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      OR |= arr[i];
      AND &= arr[i];
    }

    cout << OR - AND << "\n";
  }

  return 0;
}