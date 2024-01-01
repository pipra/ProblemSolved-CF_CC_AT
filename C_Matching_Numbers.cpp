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
#define 	yes 	cout<<"Yes"<<endl
#define 	no 		cout<<"No"<<endl
#define 	endl 	"\n"
#define 	all(x)  x.begin(),x.end()
#define 	FastIO 	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    int n;  cin>>n;
    if(!(n%2)){ no; return; }
    yes;
    int left = n , right = n+1 ;
    bool c = false ;
    for( int i=0;i<n;i++ ){
        cout<< left << " " << right <<endl ;

        if(c){  left++; right-=2 ;  continue; }

        if( right==2*n ){
            right = 2*n - 1 ;
            left = 1 ;
            c = true;
            continue;
        }
        left--;     right+=2 ;
    }
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}