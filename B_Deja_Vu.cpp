// PIPRA
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
#define ff first
#define ss second
#define pb push_back
#define pop pop_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    ll nn, qq;
    cin >> nn >> qq;
    vector<ll> aa(nn), xx(qq);

    for (auto &i : aa)
        cin >> i;
    for (auto &i : xx)
        cin >> i;

    vector<ll> c(31, 0);
    vector<ll> duplicate;

    for (auto i : xx)
    {
        if (c[i] == 0)
        {
            duplicate.pb(i);
        }
        c[i]++;
    }

    for (auto &i : duplicate)
    {
        ll t = 1;
        for (int j = 1; j < i; j++)
        {
            t *= 2;
        }
        ll che = t * 2;
        ll add = t;
        for (int i = 0; i < nn; i++)
        {
            if (aa[i] % che == 0)
            {
                aa[i] += add;
            }
        }
    }

    for (auto i : aa)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    // Code_by_Pipra
    FastIO;
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}