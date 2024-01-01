#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define fori(i,n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define  ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void pipra(){

    int n;  cin>>n;
    vector< string > v(n);

    for( string &x : v) cin>>x;

    vector<string> vv;
    vv = v;
    
    for( int i=0;i<n/2;i++ ){
        for( int j=i;j<n-1-i ; j++ ){
            vv[i][j] = max( v[i][j] , max( v[j][n-1-i] , max( v[n-1-i][n-1-j] , v[n-1-j][i] ) ) );
            vv[j][n-1-i] = vv[i][j] ;
            vv[n-1-i][n-1-j] = vv[i][j] ;
            vv[n-1-j][i] = vv[i][j] ;
        }
    }
    int c=0;
    for( int i=0;i<n;i++ ){
        for( int j=0;j<n;j++ ){
            c += vv[i][j] - v[i][j] ;
        }
    }
    cout<<c<<endl;
}

int32_t main(){
    ios;
    int tt; cin>>tt;
    while( tt-- )
        pipra();
}
