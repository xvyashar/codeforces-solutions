// https://codeforces.com/problemset/problem/2149/C
// Name: MEX rose

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, k;
    cin >> n >> k;

    int a[n];
    int mx = k;
    for (int j = 0; j < n; j++)
    {
      cin >> a[j];
      if (a[j] > mx)
        mx = a[j];
    }

    vector<int> freq(mx + 1, 0);
    for (int x : a)
      freq[x]++;

    int ops = 0;
    for (int j = 0; j < k; j++)
      if (freq[j] == 0)
        ops++;

    cout << max(ops, freq[k]) << "\n";
  }

  return 0;
}
