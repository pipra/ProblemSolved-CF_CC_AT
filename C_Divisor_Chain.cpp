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
    int x;  cin>>x;
    vector<int> ans;
    ans.pb(x) ;
    int p;

    for( int i=0; ;++i ){
        if( (x>>i) & 1 ){
            if( x==(1<<i) ){
                p=i;
                break;
            }
            x -= (1<<i) ;
            ans.pb(x) ;
        }
    }
    while( p>0 ){
        x -= (1<<(p-1)) ;
        ans.pb(x);
        --p;
    }

    cout<< ans.size() <<endl;
    for( int &i : ans ){
        cout<< i <<" ";
    }
    cout<<endl;

}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}