#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    deque<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> s, d;
    int turn = 1; // 1 to sereja & -1 to dema

    while (v.size() != 0)
    {
        if (turn == 1)
        {
            if (v.front() > v.back())
            {
                s.push_back(v.front());
                v.pop_front();
            }
            else
            {
                s.push_back(v.back());
                v.pop_back();
            }
        }
        else
        {
            if (v.front() > v.back())
            {
                d.push_back(v.front());
                v.pop_front();
            }
            else
            {
                d.push_back(v.back());
                v.pop_back();
            }
        }

        turn *= -1;
    }

    int sumA = 0, sumB= 0;
    for (auto i : s)
        sumA += i;
    for (auto i : d)
        sumB += i;
    
    cout << sumA << ' ' << sumB << endl;    
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}