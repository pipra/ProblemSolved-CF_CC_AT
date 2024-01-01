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

bool check( int n , int m ){
    if( n==m )  return true ;
    else if( n%3 != 0  )    return false ;
    else{
        return check(n/3,m) || check((2*n)/3 , m) ;
    }
}

void solve(){
    int n,m;    cin>>n>>m;
    check(n,m) ? yes : no ;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}