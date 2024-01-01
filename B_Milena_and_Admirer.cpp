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
    vi a(n);
    for( int &x : a )   cin>>x;

    ll ans = 0 ;
    int mn = a[n-1] ;
    for( int i=n-2 ; i>=0 ; i-- ){
        if(mn==1){
            ans += a[i] - 1 ;
            continue;
        }
        if( a[i]<=mn ){
           mn = a[i] ; 
        }
        else{
            int k = (a[i]/mn) + (a[i]%mn!=0) ;
            ans += k ;
            cout<< k <<" ";
            if(a[i]%mn!=0)  k--;
            for( int j=0 ; j<k ; j++ ){
                // a[i]++;
                a[i] /= 2;
            }
            mn = min(a[i],mn) ;
            cout<< mn <<endl;
        }
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