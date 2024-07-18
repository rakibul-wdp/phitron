#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> initialVector(n);
  for (int i = 0; i < n; i++)
    cin >> initialVector[i];

  vector<int> replacedVector;
  for (int i = 0; i < n; i++)
  {
    if (initialVector[i] > 0)
      replacedVector.push_back(1);
    else if (initialVector[i] < 0)
      replacedVector.push_back(2);
    else
      replacedVector.push_back(0);
  }

  for (int i = 0; i < n; i++)
    cout << replacedVector[i] << " ";

  return 0;
}