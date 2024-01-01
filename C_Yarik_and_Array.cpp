//PIPRA
#include<bits/stdc++.h>
using namespace std;

typedef 	long long int 	ll;
typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vii;
#define 	ff 		first
#define 	ss 		second
#define 	pb 		push_back
#define 	pop 	pop_back
#define 	yes 	cout<<"YES"<<endl
#define 	no 		cout<<"NO"<<endl
#define 	endl 	"\n"
#define 	all(x)  x.begin(),x.end()
#define 	FastIO 	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    int n;  cin>>n;
    vi a(n);
    for( int &x : a)    cin>>x;

    // for( int i=0 ; i<n ; i++ ){
    //     ll sm = a[i] ;
    //     int j=i+1 ;
    //     mx = max( mx,a[i] ) ;
    //     while( abs(a[j])%2 != abs(a[j-1])%2 && sm>=0 && j<n  ){
    //         sm += a[j] ;
    //         mx = max(mx,sm) ;
    //         j++;
    //         // cout<< mx <<endl;
    //     }
    //     if( abs(a[j]) == abs(a[j-1]) )  i = j-1 ;
    // }
    int sum=a[0], mn= min(0,a[0]) , ans=a[0] ;

    for( int i=1;i<n;i++ ){
        if( abs(a[i])%2 == abs(a[i-1])%2 ){
            sum=0;
            mn=0;
        }
        sum += a[i] ;
        ans = max(ans,sum-mn) ;
        mn = min(mn,sum) ;
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