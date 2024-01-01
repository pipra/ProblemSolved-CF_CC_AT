//PIPRA
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
#define pb push_back
#define po pop_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    int n;  cin>>n;

    vi a(n) , b(n) ;
    vector<ll> dif(n) ;
    ll mx = LONG_LONG_MIN ;
    vi ans ;

    for( int &x : a )      cin>>x;
    for( int &x : b )      cin>>x;

    for( int i=0;i<n;i++ ){
        dif[i] = a[i] - b[i] ;
        mx = max( mx , dif[i] ) ;
    }

    for( int i=0 ; i<n ; i++ ){
        if( dif[i]==mx ){
            ans.pb( i+1 ) ;
        }
    }

    cout<< ans.size() <<endl;
    for( int &x : ans ){
        cout<< x <<" ";
    }
    cout<<endl;

}

int main(){
    //Code_by_Pipra
    Faster;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}