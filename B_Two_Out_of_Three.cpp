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
    vi a(n), b(n,1) ;
    vector<vi> aa(101);

    for( int i=0;i<n;i++ ){
        cin>>a[i];
        aa[a[i]].pb(i) ;
    }
    int k=2;
    for( auto &x : aa ){
        if( x.size()>1 ){
            b[x[0]] = k++;
        }
        if(k>3){
            break;
        }
    }
    if(k<4){    cout<<-1<<endl;    return;  }

    for( int &x : b ){
        cout<< x <<" ";
    }
    cout<<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}