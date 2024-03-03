#include <bits/stdc++.h>
string kevinStackProblem(string &s)
{
  // Write your code here.
  stack<char> st;
  string reverse = "";

  for (char c : s)
    st.push(c);

  while (!st.empty())
  {
    reverse += st.top();
    st.pop();
  }

  return reverse;
}