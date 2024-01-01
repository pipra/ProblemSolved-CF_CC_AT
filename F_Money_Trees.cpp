//PIPRA
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int> 
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define fori(i,n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define  ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void pipra(){
    int n,k;    cin>>n>>k;
    vi v(n),h(n);
    for( int &x : v )   cin>>x;
    for( int &x : h )   cin>>x;

    int ans = 0, i=0, j=1 ;
    if( v[i]<=k )       ans = 1 ;

    ll curr = v[i] ;
    
    while( j<n ){

        if( h[j-1]%h[j]==0 )       curr += v[j];
        else{
            curr = v[j] ;
            i = j ;
        }

        while( curr>k ){
            curr -= v[i++];
        }
        ans = max( ans , j-i+1 ) ;

        j++;
    }

    cout<<ans<<endl;
}

int32_t main(){
    ios;
    int tt;    cin>>tt;
    while( tt-- )
        pipra();
    return 0;
}