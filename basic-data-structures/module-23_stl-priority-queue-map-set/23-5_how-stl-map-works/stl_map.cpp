#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<string, int> mp;
  mp["abul"] = 79; // O(logN)
  mp["babul"] = 100;
  mp["cabul"] = 55;

  for (auto it = mp.begin(); it != mp.end(); it++)
  {
    cout << it->first << " " << it->second << endl; // O(logN)
  }

  cout << mp["babul"] << endl;

  return 0;
}