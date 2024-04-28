#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct asst
{
  ll t, z, y;
};

ll countMaxBalloons(ll t, ll z, ll y, ll Time)
{
  ll batchTime = (z * t) + y;
  ll batchCount = (Time / batchTime);
  ll remTime = Time % batchTime;
  ll totalBalloons = 0;
  totalBalloons += (batchCount * z);

  if (remTime != 0)
  {
    if (remTime / t >= z)
      totalBalloons += z;
    else
      totalBalloons += (remTime / t);
  }

  return totalBalloons;
}

bool isBalloonPossible(ll t, ll z, ll y, ll balloons, ll Time)
{
  ll batchTime = (z * t) + y;
  ll batches = balloons / z;
  bool ok = (balloons % z == 0) ? 1 : 0;
  ll currTime = 0;

  if (ok)
  {
    batches -= 1;
    currTime = (batchTime * batches) + (z * t);
  }
  else
    currTime = (batchTime * (batches)) + ((balloons % z) * t);

  return (currTime <= Time);
}

bool isPossible(asst *assistant, ll n, ll m, ll Time)
{
  ll totalBalloons = 0;
  for (ll i = 0; i < n; i++)
  {
    ll t = assistant[i].t;
    ll z = assistant[i].z;
    ll y = assistant[i].y;
    ll lo = 0, hi = (ll)1e9;

    while (hi > lo + 1)
    {
      ll balloons = (lo + hi) >> 1;
      if (isBalloonPossible(t, z, y, balloons, Time))
        lo = balloons;
      else
        hi = balloons;
    }

    totalBalloons += lo;
  }

  return (totalBalloons >= m);
}

int main()
{
  ll m, n;
  cin >> m >> n;

  asst assistant[n];
  for (ll i = 0; i < n; i++)
  {
    cin >> assistant[i].t >> assistant[i].z >> assistant[i].y;
  }

  ll mllime = -1, maxTime = (ll)1e9;

  while (maxTime > mllime + 1)
  {
    ll Time = (mllime + maxTime) >> 1;
    if (isPossible(assistant, n, m, Time))
      maxTime = Time;
    else
      mllime = Time;
  }

  cout << maxTime << "\n";

  ll count[n];
  memset(count, 0, sizeof count);
  for (ll i = 0; i < n; i++)
  {
    ll t = assistant[i].t;
    ll z = assistant[i].z;
    ll y = assistant[i].y;
    count[i] = countMaxBalloons(t, z, y, maxTime);
  }
  ll totalBalloons = 0;
  for (ll i = 0; i < n; i++)
  {
    if (totalBalloons + count[i] <= m)
    {
      cout << count[i] << " ";
      totalBalloons += count[i];
    }
    else
    {
      if (totalBalloons == m)
        cout << 0 << " ";
      else
      {
        cout << (m - totalBalloons) << " ";
        totalBalloons = m;
      }
    }
  }

  cout << "\n";

  return 0;
}