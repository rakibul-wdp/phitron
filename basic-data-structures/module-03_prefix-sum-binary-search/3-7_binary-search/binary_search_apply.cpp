#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

    while (q--)
  {
    int x;
    cin >> x;

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == x)
      {
        flag = true;
        break;
      }
    }

    if (flag)
      cout << "found" << endl;
    else
      cout << "not found" << endl;
  }

  return 0;
}