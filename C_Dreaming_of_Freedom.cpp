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

const int N = 1e6 + 100 ;
vector<int> min_div(N) ;

void sieve(){
    int sz = sqrt(N) ;
    for( int i=2;i<sz;i++ ){
        if( min_div[i]==0 ){
            min_div[i] = i ;
            for( int j=i*i;j<N;j+=i ){
                if( min_div[j]==0 ){
                    min_div[j] = i ;
                }
            }
        }
    }
    for( int i=1 ; i<N ; i++ ){
        if(min_div[i]==0){
            min_div[i]=i;
        }
    }
}

void solve(){
    int n,m;    cin>>n>>m;
    // cout<< min_div[n]<<endl;
    cout<< ( n==1 || min_div[n]>m ? "YES" : "NO" ) <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    sieve();
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}