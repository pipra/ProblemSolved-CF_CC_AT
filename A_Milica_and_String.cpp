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
    int n,k;  cin>>n>>k;
    string s;   cin>>s;
    vi a, b ;
    int aa=0,bb=0;
    for( int i=0;i<n;i++ ){
        if(s[i]=='A'){
            aa++;
            a.pb(i+1) ;
        }
        else{
            bb++;
            b.pb(i+1);
        }
    }

    if(bb==k){  cout<<0<<endl;  return; }
    int d = abs(k-bb) ;
    cout<< 1 <<endl;
    if(bb<k){
        cout<< a[d-1] << " B" << endl;
    }
    else{
        cout<< b[d-1] << " A"<<endl;
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