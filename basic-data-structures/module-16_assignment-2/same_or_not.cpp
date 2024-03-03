#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<int> A;
  queue<int> B;

  int N, M;
  cin >> N >> M;
  for (int i = 0; i < N; i++)
  {
    int x;
    cin >> x;
    A.push(x);
  }
  for (int i = 0; i < M; i++)
  {
    int x;
    cin >> x;
    B.push(x);
  }

  if (N == M)
  {
    bool flag = true;
    while (!A.empty() && !B.empty())
    {
      if (A.top() != B.front())
        flag = false;

      A.pop();
      B.pop();
    }
    if (flag)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  else
    cout << "NO" << endl;

  return 0;
}
