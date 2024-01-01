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
    int n,k;    cin>>n>>k;
    vi v(n);

    for( int &x : v )       cin>>x;

    int mx = -1 , two=0 ;

    for( int &i : v ){
        if( (i%k)==0 ){
            cout<< 0 <<endl ;
            return;
        }
        if( i%k==2 )    two++;
        mx = max( mx,i%k );
    }

    if( k==4 ){
        int ans = 0 ;
        if( two>1 )    ans = 0 ;
        else if( mx==1  )     ans = 2 ;
        else        ans = 1 ;

        cout<< ans <<endl;
        return;
    }

    // cout<< mx <<endl;
    cout<< (k-mx) <<endl;

}

int32_t main(){
    ios;
    int tt;    cin>>tt;
    while( tt-- )
        pipra();
    return 0;
}