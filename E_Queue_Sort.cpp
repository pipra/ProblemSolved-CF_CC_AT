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

    if( is_sorted(all(a)) ){
        cout<< 0 <<endl;    return;
    }

    int ii = 0 , mn=0 , i=n-1 ;
    
    for( ;i>=0;i-- ){
        if(a[i]<a[i-1]){
            ii = i ;
            mn = a[i] ;
            break;
        }
    }
    i--;
    for( i ; i>=0 ; i-- ){
        if( a[i]<=mn ){
            cout<< -1 <<endl;   return;
        }
    }

    cout<< ii <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}