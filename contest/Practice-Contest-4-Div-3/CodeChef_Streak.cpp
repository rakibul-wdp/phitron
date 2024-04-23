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

    int count1 = 0, count2 = 0, max1 = 0, max2 = 0;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr1[i];

      if (arr1[i] > 0)
        count1++;
      else
        count1 = 0;
      if (count1 > max1)
        max1 = count1;
    }

    for (int i = 0; i < n; i++)
    {
      cin >> arr2[i];

      if (arr2[i] > 0)
        count2++;
      else
        count2 = 0;
      if (count2 > max2)
        max2 = count2;
    }

    if (max2 == max1)
      cout << "Draw"
           << "\n";
    else if (max1 > max2)
      cout << "Om"
           << "\n";
    else
      cout << "Addy"
           << "\n";
  }

  return 0;
}