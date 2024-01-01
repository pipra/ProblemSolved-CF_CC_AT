//PIPRA
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<long long> 
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define fori(i,n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define  ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void pipra(){
    ll n,k;    cin>>n>>k;
    vi a(n),b(n);
    for(ll &x :a)      cin>>x;
    for(ll &x :b)      cin>>x;

    vector<pair<ll,ll> > vp;
    for( int i=0;i<n;i++ ){
        vp.pb({b[i],a[i]});
    }

    sort(vp.begin(),vp.end());
    ll ans = k ;

    int i=1,ind=0;
    for( ;i<n;i++ ){
        if( k<=vp[ind].first ){
            break;
        }
        ll kk;
        if( vp[ind].second<(n-i) )        kk = vp[ind].second ;
        else                            kk = (n-i) ;

        ans += kk*vp[ind].first ;
        i+=kk-1;
        ++ind;
    }

    if(i<n){
        ans += (n-i) * k ;
    }

    // for( auto &i : vp){
    //     cout<<i.second<<" "<<i.first<<endl;
    // }

    cout<<ans<<endl;
}

int32_t main(){
    ios;
    int tt;    cin>>tt;
    while( tt-- )
        pipra();
    return 0;
}