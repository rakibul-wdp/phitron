#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  int result = -1;
  for (int i = a; i <= b; i++)
  {
    if (i % c == 0)
    {
      result = i;
      break;
    }
  }

  cout << result << "\n";

  return 0;
}