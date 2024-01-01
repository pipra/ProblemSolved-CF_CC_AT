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

// int N=1e9;
// vector<int> mex(N,0);

int check( int left , int right , vector<int> &a , int need ){
    set<int> s;
    for( int i=left; i<right ; i++ ){
        s.insert(a[i]);
    }
    s.insert(1e9+100);
    int mex = -1, i=0 ;
    for( int ii: s ){
        if(ii!=i){
            mex = i ;
            break;
        }
        i++;
    }
    if( need == mex )       return true;
    return false;
}

void solve(){
    int n;  cin>>n;
    vi a(n);
    set<int> s;
    for( int &i:a){  cin>>i;    s.insert(i);    }
    s.insert(1e9+100);

    int mex = -1, i=0 ;

    for( int ii : s){
        if(ii!=i){
            mex = i ;
            break;
        }
        i++;
    }

    if(mex==n){      no;    return; }

    int req = mex + 1, ii=0 , ins = 1e9+100 ;
    vi ind;
    for( int i:a ){
        if(i==req)      ind.pb(ii) ;
        ii++;
    }

    // for( int i : ind)   cout<< i << " ";
    // cout<<endl;

    if(ind.size()<2){   yes;    return; }
    int nn = ind.size();
    if( check( 0, ind[0] , a , req-1 ) ){    yes;    return; }
    if( check( ind[nn-1]+1 , n , a , req-1) ){            yes;    return; }

    for( int i=ind[0] ; i<=ind[nn-1] ; i++ ){   a[i]=ins;  }

    if( check( 0 , n , a , req-1 )){       yes;    return; }

    no;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}