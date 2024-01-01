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
    int n;  cin>>n;
    vi v(n);    set<int> st;
    for( int &x : v)    cin>>x;
    
    n = unique( v.begin(),v.end() ) - v.begin() ;

    int ans = n ;

    for( int i=0;i<n-2;i++ ){
        ans -= ( v[i]<v[i+1] && v[i+1]<v[i+2] ) ;
        ans -= ( v[i]>v[i+1] && v[i+1]>v[i+2] ) ;
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios;
    int tt;    cin>>tt;
    while( tt-- )
        pipra();
    return 0;
}