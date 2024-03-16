#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int keep_n = n;

  int count = 0;
  do
  {
    n /= 10;
    ++count;
  } while (n != 0);

  if (count < 4)
  {
    if (count == 3)
      cout << 0 << keep_n << endl;
    else if (count == 2)
      cout << 0 << 0 << keep_n << endl;
    else if (count == 1)
      cout << 0 << 0 << 0 << keep_n << endl;
  }
  else
    cout << keep_n << endl;

  return 0;
}