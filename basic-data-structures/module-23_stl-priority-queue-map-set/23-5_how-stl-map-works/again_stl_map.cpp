#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<string, int> mp;

  mp["abul"] = 19;
  mp["babul"] = 25;
  mp["cabul"] = 15;

  // mp.insert({"abul", 19});
  // mp.insert({"babul", 25});
  // mp.insert({"cabul", 15});

  for (auto it = mp.begin(); it != mp.end(); it++)
    cout << it->first << " " << it->second << endl;

  if (mp.count("abul"))
    cout << "found" << endl;
  else
    cout << "not found" << endl;

  return 0;
}