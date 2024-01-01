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
    
    ll n,k,g;   cin>>n>>k>>g;
    ll save,last,check ;

    save = min( ((g-1)/2)*n , k*g ) ;
    last = ( k*g - save ) % g ;

    if( last>0 ){
        save -= (g-1)/2 ;

        check = ((g-1)/2 + last )%g;

        if( check*2<g )     save += check;
        else                save -= g - check;
    }

    cout<< save <<endl;
}

int32_t main(){
    ios;
    int tt;    cin>>tt;
    while( tt-- )
        pipra();
    return 0;
}