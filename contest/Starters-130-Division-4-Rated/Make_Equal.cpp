#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    if (arr[0] != arr[n - 1])
      cout << "NO"
           << "\n";
    else
    {
      int firstLast = arr[0];

      for (int i = 0; i < n; i++)
        if (arr[i] < firstLast)
          cout << "NO"
               << "\n";

      cout << "YES"
           << "\n";
    }
  }

  return 0;
}