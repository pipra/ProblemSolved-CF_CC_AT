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

void primeFactor( int x, map<int,int> &mp ){
    while( x%2==0 ){
        mp[2]++;    x/=2;
    }
    for( int i=3 ; i<=sqrt(x) ; i+=2 ){
        if( !(x%i) ){
            while( !(x%i) ){
                mp[i]++;    x /= i ;
            }
        }
    }
    if( x>1 )   mp[x]++;
}

void solve(){
    int n;  cin>>n;
    map<int,int> mp;

    for( int i=0;i<n;i++ ){
        int x;  cin>>x;
        primeFactor( x, mp ) ;
    }

    for( auto i : mp ){
        // cout<< i.ff << " " << i.ss << endl;
        if( (i.ss%n) ){
            no;     return;
        }
    }
    yes;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}