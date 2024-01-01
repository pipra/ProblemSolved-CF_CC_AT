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
    int n;  cin>>n;
    vi a(n);
    for( int &x : a )   cin>>x;

    int ans = -1 ;

    for( int &x : a ){
        int mayOrNot = 0 ;
        for( int &xx : a ){
            if(xx>x)    mayOrNot++;
        }
        int trueLies = 0 ;
        for( int &xx : a ){
            if(xx>mayOrNot)    trueLies++;
        }
        if( mayOrNot == trueLies ){
            ans = trueLies ;
            break;
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