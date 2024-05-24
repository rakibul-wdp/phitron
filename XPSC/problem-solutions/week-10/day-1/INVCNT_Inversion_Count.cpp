#include <bits/stdc++.h>
using namespace std;

long long inversionCount, arr[200001];

void merge(long long p, long long q, long long r)
{
  long long i, li, ri, n1, n2;
  n1 = q - p + 1;
  n2 = r - q;
  long long *lt = new long long[n1];
  long long *rt = new long long[n2];

  for (i = 0; i < n1; i++)
    lt[i] = arr[p + i];
  for (i = 0; i < n2; i++)
    rt[i] = arr[q + 1 + i];

  li = ri = 0;
  i = p;
  while (li < n1 && ri < n2)
  {
    if (lt[li] > rt[ri])
    {
      arr[i++] = rt[ri++];
      inversionCount = inversionCount + n1 - li;
    }
    else
      arr[i++] = lt[li++];
  }
  while (li < n1)
  {
    arr[i++] = lt[li++];
  }

  while (ri < n2)
  {
    arr[i++] = rt[ri++];
  }
}

void mergesort(long long p, long long r)
{
  if (p < r)
  {
    long long q = (p + r) / 2;
    mergesort(p, q);
    mergesort(q + 1, r);
    merge(p, q, r);
  }
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long n;
    cin >> n;

    for (int i = 0; i < n; i++)
      cin >> arr[i];

    inversionCount = 0;
    mergesort(0, n - 1);
    cout << "\n"
         << inversionCount;
  }

  return 0;
}