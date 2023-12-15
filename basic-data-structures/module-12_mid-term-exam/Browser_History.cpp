#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<string> myList;

  string addresses;
  while (true)
  {
    cin >> addresses;
    if (addresses == "end")
      break;
    myList.push_back(addresses);
  }

  int q;
  cin >> q;
  getchar();
  while (q--)
  {
    string address;
    getline(cin, address);
    cout << address << endl;
  }

  return 0;
}