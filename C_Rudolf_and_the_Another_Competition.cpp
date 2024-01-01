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
    int r,c,penalty;  cin>>r>>c>>penalty;
    vector<vi > aa(r,vi(c));

    pair<int,ll> rudolf ;
    int ans=1;

    for( vi &x: aa ){
        for( int &xx : x ){
            cin>>xx;
        }
    }

    if(r==1){
        cout<< 1 <<endl;
        return;
    }

    for( int i=0;i<r;++i ){
        ll sm = 0 , tm=0 ;
        int k=0 ;
        sort( aa[i].begin(),aa[i].end());
        for( int &x : aa[i] ){
            if( (x+tm)<=penalty ){
                tm += x ;
                sm += tm ;
                k++;
            }
            else    break;
        }
        if(i==0){
            rudolf = {-k,sm} ;
        }
        else{
            if(make_pair(-k,sm)<rudolf){
                ans++;
            }
        }
    }

    cout<< ans <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}