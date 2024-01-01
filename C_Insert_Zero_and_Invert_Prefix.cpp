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
    for( int &i : a)    cin>>i;
    
    vi cnt;     int curr=1;
    reverse(all(a));
    if(a[0]==1){    no;     return; }
    for( int i=1;i<n;i++ ){
        if(a[i]!=a[i-1]){
            cnt.pb(curr);
            curr=1;
        }
        else{
            ++curr;
        }
    }
    cnt.pb(curr);
    yes;
    int sz = cnt.size();
    for( int i=0;i<sz;i+=2 ){
        if((i+1)<sz){
            int nn = cnt[i]+cnt[i+1]-1;
            for( int j=0;j<nn;j++ ){
                cout<<0<<" ";
            }
            cout<< cnt[i+1] <<" ";
        }
        else{
            for( int j=0;j<cnt[i];j++ ){
                cout<<0<<endl;
            }
        }
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