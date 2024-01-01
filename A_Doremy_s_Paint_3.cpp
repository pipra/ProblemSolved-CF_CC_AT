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
    int n;  cin>>n;
    set<int> s;
    map<int,int> mp;

    for( int i=0;i<n;i++ ){
        int x;  cin>>x;
        s.insert(x);
        mp[x]++;
    }

    if( s.size()>2 ){
        no;     return;
    }
    else if( s.size()==1 ){
        yes;    return;
    }

    vi v(2) ;
    int i=0;
    for( int x : s ){
        v[i++] = x ;
    } 
    
    int a = mp[v[0]] ;
    int b = mp[v[1]] ;
    int nn = n/2 ;
    if( a==b || a==nn && b==(n-nn) || a==(n-nn) && b==nn ){
        yes;
        return;
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