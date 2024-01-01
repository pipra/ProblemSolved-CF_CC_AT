//PIPRA
#include<bits/stdc++.h>
using namespace std;

typedef 	long long int 	ll;
typedef 	vector<ll> 		vi;
#define 	ff 		first
#define 	ss 		second
#define 	pb 		push_back
#define 	pop 	pop_back
#define 	yes 	cout<<"YES"<<endl
#define 	no 		cout<<"NO"<<endl
#define 	endl 	"\n"
#define 	all(v)  v.begin(),v.end()
#define 	FastIO 	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    int n;  cin>>n;
    vi cnt(n+1,0) , mx(n+1,0) ;
    for( int i=0;i<n;++i ){
        int x;      cin>>x;
        if( x<=n )  ++cnt[x];
    }

    for( int i=1;i<=n;++i ){
        for( int j=i;j<=n; j+= i )     mx[j] += cnt[i] ;
    }

    cout<< *max_element( all(mx) ) <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}