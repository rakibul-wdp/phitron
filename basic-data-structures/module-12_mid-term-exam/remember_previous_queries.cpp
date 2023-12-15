#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> myList;

  int q;
  cin >> q;

  while (q--)
  {
    int x, v;
    cin >> x >> v;

    if (x == 0)
      myList.push_front(v);
    else if (x == 1)
      myList.push_back(v);
    else if (x == 2)
    {
      if (v == 0 && !myList.empty())
        myList.pop_front();
      else if (v == myList.size() - 1 && !myList.empty())
        myList.pop_back();
      else if (v < myList.size())
      {
        myList.erase(next(myList.begin(), v));
      }
    }

    cout << "L -> ";
    for (int val : myList)
      cout << val << " ";
    cout << endl;

    cout << "R -> ";
    for (auto it = myList.rbegin(); it != myList.rend(); it++)
      cout << *it << " ";
    cout << endl;
  }

  return 0;
}