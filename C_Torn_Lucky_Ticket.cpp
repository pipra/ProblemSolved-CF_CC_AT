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
    int n;  cin>>n;
    vector<string> a(n);
    for( auto &x : a)   cin>>x;

    vector<pair<int,string> > aa;
    vector<map<int,int> > mp;

    for( auto x : a)    aa.pb({x.size(),x}) ;
    sort(all(aa));
    a.clear();

    for( auto x: aa)    a.pb(x.ss) ;

    for( auto x: a){
        ;
    }


}

int main(){
    //Code_by_Pipra
    FastIO;
        solve();
    return 0;
}