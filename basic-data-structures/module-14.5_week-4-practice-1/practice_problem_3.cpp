#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<int> st;
  stack<int> newSt;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }

  while (!st.empty())
  {
    newSt.push(st.top());
    st.pop();
  }

  while (!newSt.empty())
  {
    cout << newSt.top() << " ";
    newSt.pop();
  }

  return 0;
}