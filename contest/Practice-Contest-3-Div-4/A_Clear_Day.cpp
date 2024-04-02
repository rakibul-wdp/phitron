#include <bits/stdc++.h>
using namespace std;

int main()
{
  int rainyDays, cloudyDays;
  cin >> rainyDays >> cloudyDays;

  int clearDays = 7 - (rainyDays + cloudyDays);

  cout << clearDays << "\n";

  return 0;
}