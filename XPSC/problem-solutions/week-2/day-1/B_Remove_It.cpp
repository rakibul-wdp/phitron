#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x;
  cin >> n >> x;

  vector<int> integerSequence(n);

  for (int i = 0; i < n; i++)
    cin >> integerSequence[i];

  vector<int> modifiedSequence;

  for (int i = 0; i < n; i++)
    if (integerSequence[i] != x)
      modifiedSequence.push_back(integerSequence[i]);

  for (int eachModifiedSequence : modifiedSequence)
    cout
        << eachModifiedSequence << " ";

  return 0;
}