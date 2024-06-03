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

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    vector<int> gcdArray;
    for (int i = 0; i < n - 1; i++)
      gcdArray.push_back(__gcd(arr[i], arr[i + 1]));

    int index = -1;

    for (int i = 0; i < n - 2; i++)
    {
      if (gcdArray[i] > gcdArray[i + 1])
      {
        index = i;
        break;
      }
    }

    if (index == -1)
    {
      cout << "YES\n";
      continue;
    }

    vector<int> modifiedArr1, modifiedArr2, modifiedArr3;

    for (int i = 0; i < n; i++)
    {
      if (i != index + 1)
        modifiedArr1.push_back(arr[i]);
      if (i != index + 2)
        modifiedArr2.push_back(arr[i]);
      if (i != index)
        modifiedArr3.push_back(arr[i]);
    }

    vector<int> modifiedGcd1, modifiedGcd2, modifiedGcd3;

    for (int i = 0; i < n - 2; i++)
    {
      modifiedGcd1.push_back(gcd(modifiedArr1[i], modifiedArr1[i + 1]));
      modifiedGcd2.push_back(gcd(modifiedArr2[i], modifiedArr2[i + 1]));
      modifiedGcd3.push_back(gcd(modifiedArr3[i], modifiedArr3[i + 1]));
    }

    bool flag1 = true, flag2 = true, flag3 = true;

    for (int i = 0; i < n - 3; i++)
    {
      if (modifiedGcd1[i] > modifiedGcd1[i + 1])
      {
        flag1 = false;
        break;
      }
    }

    for (int i = 0; i < n - 3; i++)
    {
      if (modifiedGcd2[i] > modifiedGcd2[i + 1])
      {
        flag2 = false;
        break;
      }
    }

    for (int i = 0; i < n - 3; i++)
    {
      if (modifiedGcd3[i] > modifiedGcd3[i + 1])
      {
        flag3 = false;
        break;
      }
    }

    if (!(flag1 || flag2 || flag3))
      cout << "NO\n";
    else
      cout << "YES\n";
  }

  return 0;
}