//PIPRA
#include<bits/stdc++.h>
using namespace std;

typedef 	long long int 	ll;
typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vii;
#define 	ff 		first
#define 	ss 		second
#define 	pb 		push_back
#define 	pop 	pop_back
#define 	yes 	cout<<"YES"<<endl
#define 	no 		cout<<"NO"<<endl
#define 	endl 	"\n"
#define 	all(x)  x.begin(),x.end()
#define 	FastIO 	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    ll n;  cin>>n;
    vii a(n);
    vector<pair<ll,ll>> vp(n);

    for( int i=0;i<n;i++ ){
        cin>>a[i];
        vp[i] = {a[i],i} ;
    }

    sort(all(vp));
    vii sum , ans(n) , cnt(n+1);
    ll sm=0, c=0 ;
    
    for( auto i : vp){
        sm += i.ff ;
        sum.pb(sm) ;
    }
    cnt[n-1] = 0 ;
    for( int i=n-2;i>=0;i-- ){
        if(sum[i]>=vp[i+1].ff)    c++;
        else                    c=0 ;
        cnt[i] = c ;
    }

    for( int i=n-1 ; i>=0 ; i-- ){
        ans[vp[i].ss] = i + cnt[i] ;
    }

    for( auto i : ans ){
        cout<< i << " ";
    }
    cout<<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}