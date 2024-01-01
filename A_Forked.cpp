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
    int a,b,xk,yk,xq,yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;

    vector<int> dx={-a,-a,a,a,-b,-b,b,b};
    vector<int> dy={-b,b,-b,b,-a,a,-a,a};

    set<pair<int,int>> Q;
    set<pair<int,int>> K;

    for( int i=0;i<8;i++ ){
        K.insert({xk+dx[i],yk+dy[i]}) ;
    }
    for( int i=0;i<8;i++ ){
        Q.insert({xq+dx[i],yq+dy[i]}) ;
    }
    
    int ans = 0 ;

    for( auto i : K ){
        if( Q.find(i)!=Q.end() )        ans++;
    }

    cout<< ans <<endl;

}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}