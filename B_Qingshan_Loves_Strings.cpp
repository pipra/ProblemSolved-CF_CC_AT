//PIPRA
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vi;
#define pb push_back
#define po pop_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    int n,m;        cin>>n>>m;
    string s,t;     cin>>s>>t;

    bool ss = true , tt = true ;

    for( int i=0 ; i<n-1 ; i++ ){
        if( s[i]==s[i+1] ){
            ss = false;
            break;
        }
    }
    for( int i=0 ; i<m-1 ; i++ ){
        if( t[i]==t[i+1] ){
            tt = false;
            break;
        }
    }

    if( ss ){
        yes;        return;
    }

    if( !ss && !tt ){
        no;         return;
    }
    bool ans = true ;
    for( int i=0;i<n-1;i++ ){
        if( s[i]==s[i+1] ){
            if( t[0]==s[i] || t[m-1] == s[i] ){
                ans = false ;
                break;
            }
        }
    }

    if(ans){
        yes;        return;
    }

    no;

}

int main(){
    //Code_by_Pipra
    Faster;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}