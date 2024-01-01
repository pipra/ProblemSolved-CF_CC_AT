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
    int l,r;    cin>>l>>r;

    int ans=l , mnn=0 ;
    for( int i=1 ; i<=100 && l<=r ; i++ , l++){
        int mn = 10 , mx = 0 , k = l ;
        while( k>0 ){
            int kk = k%10 ;
            k /=10 ;
            mn = min(mn,kk);    mx = max(mx,kk);
        }
        if( (mx-mn) > mnn ){
            ans = l ;
            mnn = mx-mn ;
        }
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