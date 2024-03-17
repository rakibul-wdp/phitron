vector<long long> printFirstNegativeInteger(long long int a[], long long int n, long long int k)
{
  int l = 0, r = 0;
  vector<long long> f, window;

  while (r < n)
  {
    if (a[r] < 0)
      window.push_back(a[r]);

    if ((r - l + 1) == k)
    {
      if (window.empty())
        f.push_back(0);
      else
        f.push_back(window.front());

      if (a[l] < 0)
        window.erase(window.begin());

      l++;
    }
    r++;
  }
  return f;
}