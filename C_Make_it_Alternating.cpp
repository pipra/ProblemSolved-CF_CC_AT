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
int M = 998244353 ;

void pipra(){
    string s;   cin>>s;
    vector<int> v;

    int sz = s.size() , c=0 ;
    for( int i=0 ; i<sz ;  ){
        int j = i +1 ;
        while( j<sz && s[i]==s[j] )
            j++;
        v.pb(j-i);
        i = j ;
    }

    ll ans = 0 , ans1 = 1 ;

    for( int &k : v ){
        ans += (k-1) ;
        ans1 = ( ans1*k ) %M ;
    }
    for( int i=1 ; i<=ans ; i++ ){
        ans1 = (ans1 * i) %M ;
    }

    cout<<ans<<" "<<ans1<<endl;
}

int32_t main(){
    ios;
    int tt;    cin>>tt;
    while( tt-- )
        pipra();
    return 0;
}