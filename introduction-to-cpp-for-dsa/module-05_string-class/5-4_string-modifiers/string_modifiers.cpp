#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a = "hello";
  string b = "world";
  // a += b;
  // a.append(b);
  // cout << a << endl
  //      << b << endl;

  // a[5] = 'A'; // didn't works
  // a = "helloA";
  // a = a + 'A';
  a.push_back('A');
  a.pop_back();
  a.pop_back();
  cout << a << endl;

  return 0;
}