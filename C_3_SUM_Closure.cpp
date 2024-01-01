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
    vi pos, neg, a;     int zero = 0 ;

    for( int i=0;i<n;i++ ){
        int x;          cin>>x;
        if(x>0)         pos.pb(x);
        else if(x<0)    neg.pb(x);
        else            zero++;
    }
    if( pos.size()>2 || neg.size()>2 ) {    no; return;   }

    for( int &x : pos)  a.pb(x);
    for( int &x : neg)  a.pb(x);
    if(zero>0)  a.pb(0) ;
    
    n = a.size();
    for( int i=0; i<n ; i++ ){
        for( int j=i+1 ; j<n ; j++ ){
            for( int k=j+1 ; k<n ; k++ ){
                int sum = a[i] + a[j] + a[k] ;
                bool ok=0;
                for( int m=0;m<n;m++ ){
                    if( sum == a[m] )     ok = 1 ;
                }
                if(!ok){
                    no; return;
                }
            }
        }
    }
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