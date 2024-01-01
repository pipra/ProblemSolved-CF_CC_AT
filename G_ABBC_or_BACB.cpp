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
    string s;   cin>>s;
    bool check = false; int n=s.size();
    if( s[0]=='B' or s[n-1]=='B' )     check = true ;

    for( int i=1;i<n;i++ ){
        if( s[i]==s[i-1] and s[i]=='B' )     check = true ;
    }

    if(check){
        int mx = 0 ;
        for( int i=0;i<n;i++ ){
            if(s[i]=='A')   mx++;
        }
        cout<< mx <<endl;
        return;
    }

    vector<int> v;      int c=0;
    for( int i=0;i<n;i++ ){
        if( s[i]=='A' )     c++;
        else{
            v.pb(c);
            c=0;
        }
        if( i==n-1 && c>0 ){
            v.pb(c);
        }
    }
    sort(v.begin(),v.end());
    int mx = 0 , i=0 ;
    for( int &x : v ){
        if(i>0) mx+= x ;
        i++;
    }
    cout<< mx <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}