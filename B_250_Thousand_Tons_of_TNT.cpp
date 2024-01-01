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
    for( ll &x: a)     cin>>x;
    vector<ll> sum;
    ll s=0;
    
    sum.pb(0);
    for( ll &x: a){
        s+=x;
        sum.pb(s);
    }
    ll  mx = 0 , mn = 10E9 ;
    for( ll &x : a){
        mx = max(x,mx) ;
        mn = min(mn,x);
    }
    ll mx_d = mx-mn ;
    ll ii = n/2 ;
    for( ll i=2;i<=ii ; i++ ){
        if(n%i!=0)      continue;
        
        vector<ll> add ;
        for( ll j= i ; j<= n ; j+=i ){
            add.pb( sum[j] - sum[j-i] ) ;
        }
            ll  mxx = 0 , mnn = 10E15 ;
            for( ll &x : add){
                mxx = max(x,mxx) ;
                mnn = min(mnn,x);
            }
            mx_d = max( mx_d , mxx-mnn ) ;
    }
    cout<< mx_d <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}