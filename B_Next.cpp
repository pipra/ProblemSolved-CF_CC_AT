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
    sort(all(a));

    for( int i=n-2;i>=0;i-- ){
        if(a[i]!=a[n-1]){
            cout<< a[i] <<endl;
            return;
        }
    }
}

int main(){
    //Code_by_Pipra
    FastIO;
        solve();
    return 0;
}