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
    ll n,need,att,pra;     cin>>n>>need>>att>>pra;
    ll week = (n+6) / 7 ;
    ll ini=0 , final=n , mid;

    while(final-ini>1){
        mid = (ini+final)/2 ;
        ll total = (n-mid) * att + min(2*(n-mid),week) * pra ;
        if(total>=need)     ini = mid ;
        else                final = mid ;
    }

    cout<< ini <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}