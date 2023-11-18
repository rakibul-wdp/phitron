#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "Abul Babul";
  string name = "Abul Babul Cabul Ebul";

  cout << s.size() << endl;
  cout << s.max_size() << endl;
  cout << name.capacity() << endl;

  name.clear();
  cout << name << endl;
  cout << name.size() << endl;

  string abul = "abul";
  abul.clear();
  if (abul.empty() == true) // abu.size() == 0
    cout << "empty" << endl;
  else
    cout << "not empty" << endl;

  string babul;
  cin >> babul;

  babul.resize(2);
  babul.resize(8, 'x');
  cout << babul.size() << endl;
  cout << babul << endl;

  return 0;
}