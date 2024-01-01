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
    vi v(n) , temp(n) ;

    temp[0] = 1 ;
    for( int i=1; i<n ; i++ ){
        temp[i] = temp[i-1] + i ;
    }

    bool c = false;     

    for( int i = n-1 ; i>=0 ; i-- ){

        if( temp[i]<=k && c==false )    c = true;

        if( c ){
            v[i] = temp[i] ;
        }
        else{
            v[i] = k--;
        }
    }

    for( int &i : v ){
        cout<< i <<" ";
    }

    cout<<endl;
}

int32_t main(){
    ios;
    int tt;    cin>>tt;
    while( tt-- )
        pipra();
    return 0;
}