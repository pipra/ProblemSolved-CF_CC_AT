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
    vi a(n+1,0) ;
    int mx = 0 , ans ;

    for( int i = 0 ; i<m ; i++ ){
        int x;  cin>>x;
        a[x]++;

        if( a[x]>mx ){
            mx = a[x] ;
            ans = x ;
        }
        else if( a[x]==mx ){
            // for( int j=1 ; j<=n ; j++ ){
            //     if(a[j]==mx){
            //         ans = j ;
            //         break;
            //     }
            // }
            if(x<ans){
                ans = x ;
            }
        }
        cout<< ans <<endl;
    }
}

int main(){
    //Code_by_Pipra
    FastIO;
        solve();
    return 0;
}