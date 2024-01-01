//PIPRA
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
#define ff first
#define ss second
#define pb push_back
#define pop pop_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    int n;  cin >> n;
    vector<pair<int, int>> p(n);
    vector<int> a(2 * n);

    for (int i = 0; i < 2 * n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        p[i] = {a[i], a[i + n]};
    }

    int ans = 0;

    for (int i = 1; i < n; i++) {
        ans += abs(p[i].ff - p[i - 1].ff) + abs(p[i].ss - p[i - 1].ss);
    }
    cout << ans << "\n";

    for (auto &p : p) {
        cout << p.ff << " " << p.ss << "\n";
    }
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}