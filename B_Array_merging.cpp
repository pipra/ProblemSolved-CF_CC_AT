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
#define N 10E5

void pipra(){
    int n;  cin>>n;
    vi a(n),b(n);

    for( int &x :a)     cin>>x;
    for( int &x :b)     cin>>x;

    map<int,int> aa,bb;
    int i=0,mx=0;
    for( ;i<n; ){
        int l = i+1 ;
        while( l<n && a[i]==a[l] ){
            l++;
        }
        aa[a[i]] = max( aa[a[i]], l-i );
        i = l ;
    }   
    i=0;
    for( ;i<n; ){
        int l = i+1 ;
        while( l<n && b[i]==b[l] ){
            l++;
        }
        bb[b[i]] = max( bb[b[i]], l-i );
        i = l ;
    }

    int ans = 1 ;

    for(auto i : a)
    	ans = max(ans, aa[i] + bb[i]);
 
    for(auto i : b)
    	ans = max(ans, aa[i] + bb[i]);

    cout<<ans<<endl;
}

int32_t main(){
    ios;
    int tt;    cin>>tt;
    while( tt-- )
        pipra();
    return 0;
}