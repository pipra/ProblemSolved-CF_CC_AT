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
    string s;   cin>>s;
    string ab = "ab" , ba = "ba" ;

    if(s.find(ab)!=string::npos || s.find(ba)!=string::npos){
        yes;    return;
    }
    no;
}

int main(){
    //Code_by_Pipra
    FastIO;
        solve();
    return 0;
}