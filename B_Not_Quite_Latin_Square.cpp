//Code never lies, LET'S START
#include<bits/stdc++.h>
using namespace std;

#define  ll                long long int
#define  ff                first
#define  ss                second
#define  pb                push_back
#define  yes               cout<<"YES"<<endl
#define  no                cout<<"NO"<<endl
#define  endl              "\n"
#define  all(x)            x.begin(),x.end()
#define  loop(i,a,b)       for( ll i=a;i<=b;i++ )
#define  loop2(i,b,a)      for( ll i=b;i>=a;i-- )
#define  M                 1000000007
#define  vll               vector<ll>
#define  pll               pair<ll,ll>
#define  vp                vector<pll>
#define  FastIO            ios_base::sync_with_stdio(false); cin.tie(NULL);

const   int    N = 2e5 + 5;
const   int    MX = 1e9 + 10;
const   ll     MXX = 1e18;

void pipra(){
    string a,b,c;       cin>>a>>b>>c;
    vll cnt(3,0);
    for( char i : a){
        if( i!='?' )    cnt[i-'A']++;
    }
    for( char i : b){
        if( i!='?' )    cnt[i-'A']++;
    }
    for( char i : c){
        if( i!='?' )    cnt[i-'A']++;
    }
    
    char ans;
    if(cnt[0]==2)   ans = 'A';
    if(cnt[1]==2)   ans = 'B';
    if(cnt[2]==2)   ans = 'C';

    cout<<ans<<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        pipra();
    return 0;
}