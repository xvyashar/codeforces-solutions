// https://codeforces.com/problemset/problem/2188/B
// Name: Seats

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> ts(t);
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cin >> ts[i];
    }

    for (string &test : ts)
    {
        int m = 0;
        for (size_t i = 0; i < test.size(); i++)
        {
            if (test[i] == '1')
            {
                m++;
                i++;
                continue;
            }

            if ((i + 1 < test.size() && test[i + 1] == '1') || (i + 2 < test.size() && test[i + 2] != '1'))
            {
                m++;
                i += 2;
            }
            else
            {
                m++;
                i++;
            }
        }

        cout << m << '\n';
    }

    return 0;
}