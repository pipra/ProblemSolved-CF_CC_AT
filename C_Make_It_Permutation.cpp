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
    ll n,ad,bad;  cin>>n>>bad>>ad;
    ll point=n*bad, one=0 ;    
    vii a;   a.pb(0);
    set<ll> s;
    for(int i=0;i<n;i++ ){
        ll x;  cin>>x;      if(x==1)  one=1;
        s.insert(x);
    }
    if(one==0){     point += ad;    a.pb(1); }
    for( ll i : s )     a.pb(i);
    ll lagbe= (n-s.size()) * ad + (one==0) * ad ;
    ll nn = a.size();
    cout<< nn <<endl;

    for( int i=0;i<nn-1;i++ ){
        if(  (a[i]+1) == a[i+1] )   continue;
        ll mn=min( (a[i+1]-a[i]-1) * ad , (n-i-1) * bad ) ;
        lagbe += mn ;
        if( mn == (nn-i-1) * bad )   break;
    }
    point = min(lagbe,point) ;

    for( int i : a)     cout<<i<<" ";   cout<<endl;
    cout<<point<<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
   ll tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}