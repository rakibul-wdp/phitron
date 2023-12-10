#include <bits/stdc++.h>
using namespace std;

int main()
{
  // list<int> myList;
  // list<int> list2 = {7, 8, 9, 10, 11};
  // list<int> myList(list2);
  int a[5] = {7, 8, 9, 10, 11};
  vector<int> v = {55, 56, 57};
  list<int> myList(v.begin(), v.end());

  // for (auto it = myList.begin(); it != myList.end(); it++)
  //   cout << *it << endl;

  for (int val : myList)
    cout << val << endl;

  return 0;
}