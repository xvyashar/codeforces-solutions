// https://codeforces.com/problemset/problem/2188/A
// Name: Divisible Permutation

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    int prev = (n / 2) + 1;
    bool up = n % 2 == 0;
    for (int i = -1; i < n - 1; i++)
    {
      prev = (up ? prev + (i + 1) : prev - (i + 1));
      cout << prev << ' ';
      up = !up;
    }
    cout << endl;
  }

  return 0;
}