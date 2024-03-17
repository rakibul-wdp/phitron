#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, t;
  cin >> a >> b >> t;

  int generated_times = t / a;

  cout << generated_times * b << "\n";

  return 0;
}