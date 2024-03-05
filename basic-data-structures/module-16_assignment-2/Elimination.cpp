#include <bits/stdc++.h>
using namespace std;

/*
You will be given a binary string S in which every 1 will eliminate its previously adjacent 0 and itself. After an elimination, if another elimination is possible, it will continue until no further eliminations can be made.

For example, if the sequence is 100110110, then the 3rd and 4th elements, as well as the 6th and 7th elements, will be eliminated, resulting in the string 10110 (10 01 1 01 10 - Bold values are eliminated). After that, the 2nd and 3rd elements will be eliminated, resulting in the string 110 (1 01 10 - Bold values are eliminated). After that, no further eliminations can occur.
*/

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;

    stack<char> st;
    for (char c : s)
    {
      if (c == '1')
      {
        if (!st.empty() && st.top() == '0')
          st.pop();
        else
          st.push(c);
      }
      else
      {
        st.push(c);
      }
    }

    if (st.empty())
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
