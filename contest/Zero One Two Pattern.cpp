#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - 1; j++)
      cout << " ";

    for (int j = 1; j <= n - 2; j++)
      cout << i % 3;

    for (int j = n; j >= 0; j -= 2)
      cout << " ";

    for (int j = 1; j <= n - 2; j++)
      cout << i % 3;
    cout << '\n';
  }

  // for (int i = 1; i <= n - 1; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //     cout << " ";

  //   for (int j = 1; j <= i + 1; j++)
  //     cout << i;

  //   for (int j = 1; j <= n; j++)
  //     cout << " ";

  //   for (int j = 1; j <= i + 1; j++)
  //     cout << i;
  //   cout << '\n';
  // }

  return 0;
}

/*
for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n - i;j++) {
            cout << " ";
        }
        // n=7, n-i+1 = 7-1+1=7
        // n=7, n-i+1 = 7-2+1=6
        for (int j = 1;j <= n - i + 1;j++) {
            cout << "*";
        }

        // n=7, (4*(i-1)) = (4*(1-1))=0
        // n=7, (4*(i-1)) = (4*(2-1))=4
        for (int j = 1;j <= (4 * (i - 1));j++) {
            cout << " ";
        }


        for (int j = 1;j <= n - i + 1;j++) {
            cout << "*";
        }
        cout << '\n';
    }


    for (int i = 1;i <= n - 1;i++) {
        for (int j = 1;j <= i;j++) {
            cout << " ";
        }

        for (int j = 1;j <= i + 1;j++) {
            cout << "*";
        }

        // n=7, i=1 -> (4*(7-(1+1))) = 4*(7-2) = 4*5 = 20
        for (int j = 1;j <= (4 * (n - (i + 1)));j++) {
            cout << " ";
        }

        for (int j = 1;j <= i + 1;j++) {
            cout << "*";
        }
        cout << '\n';
    }

1   1
 2 2
  0
 1 1
2   2

1             1
 2           2
  0         0
   1       1
    2     2
     0   0
      1 1
       2
      0 0
     1   1
    2     2
   0       0
  1         1
 2           2
0             0
*/