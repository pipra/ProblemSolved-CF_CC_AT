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
    string s;   cin>>s;
    int vow = 0 , con = 0 ;

    vi a;
    a.pb(1);
    a.pb(3);
    a.pb(5);

    int ii = 0 ;
    for( char i : s ){
        if(i=='A' || i=='E' || i=='I'|| i=='O' || i=='U' ){
            if( ii==1 || ii==3 || ii==5 ){
                ii++;
                continue;
            }
            else{
                no; return;
            }
        }
        else{
            if( ii==1 || ii==3 || ii==5 ){
                no;
                return;
            }
        }
        ii++;
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