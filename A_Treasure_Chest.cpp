//PIPRA
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
#define ff first
#define ss second
#define pb push_back
#define pop pop_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    int x,y,k;    cin>>x>>y>>k;
    int ans=0;
    if( x>y )   ans = x ;
    else{
        ans += x ;
        if( (y-x)<=k ){
            ans += y-x ;
        }
        else{
            ans += k ;
            ans += (y-x-k) * 2 ;
        }
    }

    cout<< ans <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}