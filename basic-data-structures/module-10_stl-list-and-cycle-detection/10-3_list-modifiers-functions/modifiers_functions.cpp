#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> myList = {7, 8, 9, 10, 11, 12, 13};
  // list<int> newList = {100, 200, 300};
  // vector<int> v = {60, 70, 80};
  // list<int> newList;
  // newList = myList;
  // newList.assign(myList.begin(), myList.end());
  // myList.push_back(99);
  // myList.push_front(77);
  // myList.pop_back();
  // myList.pop_back();
  // myList.pop_front();

  // myList.insert(next(myList.begin(), 1), {100, 200, 300});
  // myList.insert(next(myList.begin(), 1), newList.begin(), newList.end());
  // myList.insert(next(myList.begin(), 1), v.begin(), v.end());

  // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));

  // replace(myList.begin(), myList.end(), 9, 100);

  // for (int val : myList)
  //   cout << val << endl;

  auto it = find(myList.begin(), myList.end(), 9);
  if (it == myList.end())
    cout << "not found" << endl;
  else
    cout << "found" << endl;

  return 0;
}