#include <bits/stdc++.h>
using namespace std;

int main()
{
  queue<int> q;
  stack<int> st;
  queue<int> newQ;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    q.push(x);
  }

  while (!q.empty())
  {
    st.push(q.front());
    q.pop();
  }
  while (!st.empty())
  {
    newQ.push(st.top());
    st.pop();
  }

  while (!newQ.empty())
  {
    cout << newQ.front() << " ";
    newQ.pop();
  }

  return 0;
}