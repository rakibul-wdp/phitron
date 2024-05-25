#include <bits/stdc++.h>
using namespace std;

const long long N = 5e5 + 10;
long long cnt, tem[N], arr[N];
pair<long long, long long> p[N];

long long mergeSort(long long arr[], long long l, long long r)
{
  if (l >= r)
    return 0;

  long long mid = l + r >> 1, k = 0;
  long long i = l, j = mid + 1;
  long long sum = mergeSort(arr, l, mid) + mergeSort(arr, mid + 1, r);

  while (i <= mid && j <= r)
  {
    if (arr[i] <= arr[j])
      tem[k++] = arr[i++];
    else
    {
      tem[k++] = arr[j++];
      sum += mid - i + 1;
    }
  }

  while (i <= mid)
    tem[k++] = arr[i++];
  while (j <= r)
    tem[k++] = arr[j++];
  for (long long i = l, j = 0; i <= r; j++, i++)
    arr[i] = tem[j];

  return sum;
}

int main()
{
  long long t;
  cin >> t;

  while (t--)
  {
    long long n;
    cin >> n;

    for (long long i = 0; i < n; i++)
      cin >> p[i].first >> p[i].second;

    sort(p, p + n);

    for (long long i = 0; i < n; i++)
      arr[i] = p[i].second;

    cnt = mergeSort(arr, 0, n - 1);

    cout << cnt << "\n";
  }

  return 0;
}