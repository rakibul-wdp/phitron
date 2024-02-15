#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> myList = {7, 8, 9, 5, 3, 1, 4, 2};
  // myList.remove(7);
  // myList.sort();
  // myList.sort(greater<int>());
  // myList.unique();
  myList.reverse();

  for (int val : myList)
    cout << val << endl;

  return 0;
}