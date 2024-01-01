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
    string s;   cin>>s;
    int diff = n-k ;

    if( diff<2 ){
        yes;    return;
    }

    vi add(26) ;    int odd = 0 ;




    for( char &ch : s ){
        add[ch-'a']++;
    }
    for( int &i : add ){
        if( i & 1 )     odd++; ;   
    }




    if( odd>k+1 ){
        no;     return;
    }

    if( (n-k)%2 == abs(odd-k)%2 ){
        yes;     return;
    }


    
    no;
}

int32_t main(){
    ios;
    int tt;    cin>>tt;
    while( tt-- )
        pipra();
    return 0;
}