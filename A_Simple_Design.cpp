//PIPRA
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
#define push push_back
#define make make_pair
#define pop pop_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fori(i,a,b) for( int i=a;i<b;i++ ) 
#define nl "\n"
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve(){
    int x,k;    cin>>x>>k;
    int ans = -1 ;

    for( int i=0;i<1000;i++ ){
        int t = x ; 
        int s = 0 ;
        while( t>0 ){
            s += t%10 ;
            t /= 10 ;
        }
        if(s%k==0){
            ans = x ;
            break;
        }
        x++;
    }

    cout<<ans<<endl;
}
int main(){
    //Code_by_Pipra
    Faster;
    // int tt=1;
    int tt;
    cin>>tt;
    while(tt--)
        solve();
    return 0;
}