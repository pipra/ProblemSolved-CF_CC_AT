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
    int  n; cin>>n; 
    vi a(n);
    for( int &x : a )   cin>>x;

    if( n<=2 ){ yes;    return; }

    int i=2 ;
    while( i<3 && i<n-1 ){
        if( a[i]>a[i+1] ){
            no;     return;
        }
        i++;
    }
    i = 4 ;
    while( i<7 && i<n-1 ){
        if( a[i]>a[i+1] ){
            no;     return;
        }
        i++;
    }
    i = 8 ;
    while( i<15 && i<n-1 ){
        if( a[i]>a[i+1] ){
            no;     return;
        }
        i++;
    }
    i = 16 ;
    while( i<19 && i<n-1 ){
        if( a[i]>a[i+1] ){
            no;     return;
        }
        i++;
    }

    yes;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}