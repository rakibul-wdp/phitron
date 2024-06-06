#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<string> data(n);
  for (auto &i : data)
    cin >> i;

  map<pair<int, int>, int> cnt;
  for (auto &i : data)
  {
    long long sum = 0;

    for (const char l : i)
      sum += l - '0';

    cnt[{sum, i.size()}]++;

    if (i.size() == 3 || i.size() == 5 || i.size() == 4)
    {
      cnt[{sum - (i.front() - '0') * 2, i.size() - 2}]++;
      cnt[{sum - (i.back() - '0') * 2, i.size() - 2}]++;
    }

    if (i.size() == 5)
    {
      cnt[{sum - (i[4] - '0' + i[3] - '0') * 2, 1}]++;
      cnt[{sum - (i[0] - '0' + i[1] - '0') * 2, 1}]++;
    }
  }

  long long ans = 0;
  for (auto &i : data)
  {
    long long sum = 0;

    for (const char l : i)
      sum += l - '0';

    if (auto iter = cnt.find({sum, i.length()}); iter != cnt.end())
      ans += iter->second;
  }

  cout << ans << "\n";

  return 0;
}