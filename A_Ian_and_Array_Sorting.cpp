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
    for( ll &i : a)    cin>>i;

    if(n&1){                 yes;   return; }
    // if(is_sorted(all(a))){   yes;   return; }
    
    for( int i=1;i<n-1;i++ ){
        ll tmp = a[i-1] - a[i] ;
        a[i] += tmp;
        a[i+1] += tmp;
    }
    if(a[n-2]>a[n-1]){  no; return; }
    yes;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}