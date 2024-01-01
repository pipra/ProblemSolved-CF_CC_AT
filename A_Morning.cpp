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
    string s;   cin>>s;
    
    int ans = 4 ;
    int prev=1 , pres ;
    for( char &ch : s ){
        if( ch=='0' ){
            pres = 10 ;
        }
        else{
            pres = ch - '0' ;
        }

        ans += abs( pres-prev ) ;

        prev = pres ;
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