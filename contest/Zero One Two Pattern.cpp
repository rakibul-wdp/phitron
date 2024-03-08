#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int count = n * 2 - 1;

  for (int i = 1; i <= count; i++)
  {
    for (int j = 1; j <= count; j++)
    {
      if (j == i || (j == count - i + 1))
        cout << i % 3;
      else
        cout << " ";
    }

    cout << endl;
  }

  return 0;
}