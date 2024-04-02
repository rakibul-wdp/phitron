#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, e;
  cin >> n >> e;
  vector<int> arr[n];
  while (e--)
  {
    int a, b;
    cin >> a >> b;
    arr[a].push_back(b);
    arr[b].push_back(a);
  }

  // for (int val : arr[1])
  //   cout << val << " ";

  for (int i = 0; i < arr[0].size(); i++)
    cout << arr[0][i] << " ";

  return 0;
}

/*
6 6
0 1
1 5
0 4
0 3
3 4
2 4
*/