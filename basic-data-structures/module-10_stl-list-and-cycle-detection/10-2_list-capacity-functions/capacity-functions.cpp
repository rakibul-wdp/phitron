#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> myList = {7, 8, 9};

  // cout << myList.max_size() << endl;

  // myList.clear();

  myList.resize(2);
  myList.resize(5, 99);

  cout << myList.size() << endl;
  for (int val : myList)
    cout << val << endl;

  return 0;
}