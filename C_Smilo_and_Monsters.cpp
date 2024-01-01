//PIPRA
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vi;
#define ff first
#define ss second
#define pb push_back
#define pop pop_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    ll n;   cin>>n;
    vi a(n) ;
    ll sm = 0 , ans = 0 ;

    for( ll &x : a ){  cin>>x;     sm += x ; }
    sort(a.begin(),a.end());
    if( sm & 1 ){   ans=1;      a[0]--;  }

    ll sum=0 , k = sm/2 ;    
    ll i=0;
    while(i<n && sum+a[i]<=k){
        sum+=a[i];
        i++;
    }

    ans = ans + k + (n-i) ;
    cout<<ans<<endl;

}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}