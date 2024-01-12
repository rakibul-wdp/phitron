#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    set<int> s;

    int x;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      s.insert(x);
    }

    for (auto it = s.begin(); it != s.end(); it++)
      cout << *it << " ";
    cout << endl;
  }

  return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int t;
//   cin >> t;

//   while (t--)
//   {
//     int n;
//     cin >> n;
//     list<int> l;

//     int x;
//     for (int i = 0; i < n; i++)
//     {
//       cin >> x;
//       l.push_back(x);
//     }

//     l.sort();
//     l.unique();

//     for (int element : l)
//       cout << element << " ";

//     cout << endl;
//   }

//   return 0;
// }