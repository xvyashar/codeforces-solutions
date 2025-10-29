// https://codeforces.com/problemset/problem/231/A
// Name: Team

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    int s = 0;
    int c;
    cin >> c;
    s += c;
    cin >> c;
    s += c;
    cin >> c;
    s += c;

    if (s > 1)
      res++;
  }

  cout << res << endl;

  return 0;
}
