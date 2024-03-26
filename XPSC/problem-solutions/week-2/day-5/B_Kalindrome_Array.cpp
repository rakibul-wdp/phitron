#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(vector<int> arr, int x)
{
  int n = arr.size(), l = 0, r = n - 1;

  while (l < r)
  {
    if (arr[l] == x)
      l++;
    else if (arr[r] == x)
      r--;
    else if (arr[l] != arr[r])
      return false;
    else
    {
      l++;
      r--;
    }
  }

  return true;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    bool flag = true;

    for (int i = 0; i < n; i++)
      if (arr[i] != arr[n - 1 - i])
      {
        flag = checkPalindrome(arr, arr[i]) || checkPalindrome(arr, arr[n - 1 - i]);

        break;
      }

    if (flag)
      cout << "YES"
           << "\n";
    else
      cout << "NO"
           << "\n";
  }

  return 0;
}