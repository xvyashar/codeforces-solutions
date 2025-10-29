// problem: https://codeforces.com/problemset/problem/71/A
// Name: Way Too Long Words

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  string lines[n];
  for (int i = 0; i < n; i++)
  {
    string inp;
    cin >> inp;

    size_t s = inp.size();
    if (inp.size() > 10)
      lines[i] = inp[0] + to_string(s - 2) + inp[s - 1];
    else
      lines[i] = inp;
  }

  for (int i = 0; i < n; i++)
  {
    cout << lines[i] << "\n";
  }

  return 0;
}
