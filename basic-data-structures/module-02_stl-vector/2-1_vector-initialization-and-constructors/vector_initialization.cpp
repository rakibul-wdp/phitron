#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v;        // type 1
  vector<int> v2(5);    // type 2
  vector<int> v3(5, 8); // type 3

  vector<int> v4(5, 9); // type 4
  vector<int> v5(v4);   // type 4

  int a[6] = {1, 2, 3, 4, 5, 6};
  vector<int> v6(a, a + 6);

  vector<int> v7 = {7, 8, 9};

  for (int i = 0; i < v7.size(); i++)
    cout << v7[i] << " ";

  cout << v7.size() << endl;

  return 0;
}