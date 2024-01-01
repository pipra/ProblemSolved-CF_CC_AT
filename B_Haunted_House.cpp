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
    ll n;  cin>>n;
    string s;   cin>>s;

    vector<ll> v ;
    ll sm=0 , cnt = 0 ;

    for( int i=n-1 ; i>=0 ; i-- ){
        if( s[i]=='0' ){
            sm += cnt ;
            v.push_back(sm);
        }
        else{
            cnt++;
        }
    }

    int sz = v.size() ;

    for( int i=0 ; i<n ; i++ ){
        if( i<sz ){
            cout<<v[i]<<" ";
        }
        else{
            cout<<-1<<" ";
        }
    }
    cout<<endl;
}

int32_t main(){
    ios;
    int tt; cin>>tt;
    while(tt--)
        pipra();
    return 0;
}