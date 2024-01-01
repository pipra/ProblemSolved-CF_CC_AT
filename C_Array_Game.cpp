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
    ll n,k;   cin>>n>>k;
    vii a(n);
    ll mn = LONG_LONG_MAX ;
    for( ll &i : a){   cin>>i;    mn = min(mn,i);     }

    if(k>2){    cout<<0<<endl;  return; }
    vii diff(n-1) ;

    sort(all(a));
    for( int i=0;i<n-1;i++ ){
        diff[i] = abs(a[i+1] - a[i]) ;
        mn = min(diff[i],mn) ;
    }

    if(k==1){   cout<< mn << endl;  return; }

    for( int i=0;i<n;i++ ){
        for( int j=0;j<i;j++ ){
            ll u = abs(a[i]-a[j]) ;
            int pos = lower_bound(all(a),u) - a.begin();
            if(pos<n)     mn = min(mn, abs(u-a[pos])) ;
            if(pos>0)   mn = min(mn, abs(u-a[pos-1])) ;
        }
    }
    cout<< mn <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}