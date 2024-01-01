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
    int n;  cin>>n;

    if( n%3==0 ){
        if(n<12)    no;
        else{
            yes;
            cout<<"1 4 "<<(n-5)<<endl;
        }
    }
    else{
        if(n<7)     no;
        else{
            yes;
            cout<<"1 2 "<<(n-3)<<endl;
        }
    }

}

int32_t main(){
    ios;
    int tt;    cin>>tt;
    while( tt-- )
        pipra();
    return 0;
}