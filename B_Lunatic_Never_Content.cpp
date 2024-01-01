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

bool is_palindrome( vi temp , int n ){
    int l=0 , r=n-1 ;
    while(l<r){
        if( temp[l]!=temp[r] )  return false ;
        l++;    r--;
    }
    return true;
}

void solve(){
    int n;  cin>>n;
    vi a(n);
    for( int &i : a )   cin>>i;

    int ans = 0 ;

    int l=0 , r=n-1 ;
    while(l<r){
        ans = __gcd( ans , abs(a[r]-a[l]));
        l++;    r--; 
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