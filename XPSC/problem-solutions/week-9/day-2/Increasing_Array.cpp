#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;

  long long values[n];

  for (int i = 0; i < n; i++)
    cin >> values[i];

  long long answer = 0;

  for (int i = 1; i < n; i++)
  {
    if (values[i] < values[i - 1])
    {
      answer += (values[i - 1] - values[i]);
      values[i] = values[i - 1];
    }
  }

  cout << answer;

  return 0;
}