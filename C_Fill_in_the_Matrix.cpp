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
    int n,m;    cin>>n>>m;
    int ans = 0 ;

    if( m==1 )          ans = 0 ;
    else if( n>=m )     ans = m ;
    else                ans = n+1 ;

    cout<< ans <<endl;

    vector<vector<int> > aa( n, vector<int>(m) ) ;

    if( n<m ){
        int kk = m-1 ;
        for( auto &xx : aa ){
            int k = kk ;
            for( int &x : xx ){
                if( k<0 )  k = m-1 ;
                x = k ;
                k--;
            }
            kk--;
        }
    }
    else{
        for( int i=0;i<m;i++ ){
            int kk = i+1 ;
            kk %= m ;
            for( int j=0;j<n;j++ ){
                if( kk%m==i )   kk++;
                aa[j][i] = kk%m ;
                kk++;
            }
        }
    }


    for( auto &xx : aa ){
        for( int &x : xx ){
            cout<< x <<" ";
        }
        cout<<endl;
    }

}

int main(){
    //Code_by_Pipra
    Faster;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}