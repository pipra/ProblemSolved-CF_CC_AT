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

    int n,m;    cin>>n>>m;
    int sq = sqrt(n);
    if( m>=n ){
        cout<< 1 <<endl;        return;
    }

    int ans = n ;
    for( int i=1 ; i<=sq ; i++ ){
        if(n%i==0){
            if(i<=m){
                ans = min(ans,n/i) ;
            }
            if(n/i <=m){
                ans = min(ans,i);
            }
        }
    }

    cout<< ans <<endl;
}
// I wanted to solve this with math , but i don't
//In question mention it math problem but in editorial i found it's a brute force problem

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}