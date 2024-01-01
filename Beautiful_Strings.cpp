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
    ll n;   cin>>n;
    string s;   cin>>s;
    ll M = 1E9 + 7 ;

    // cout<< M <<endl;

    vii a(26,0) ;
    for( char i : s )       a[i-'a']++;

    ll ans = 1 ;
    for( int i=0;i<26;i++ ){

        if(a[i]==0)     continue;
        ans *= (a[i]+1) ;
        ans %= M ;
    }
    ans %= M ;
    cout<< ans-1 <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}