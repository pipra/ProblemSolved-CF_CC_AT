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
    string s;   cin>>s;
    // set<string> ss;
    // vector<string> ss;

    // for( int i=0;i<n;i++ ){

    //     string a = "";
    //     a += s[i] ;
    //     ss.insert(a);
        
    //     int j = i+1 ;
    //     while( s[j]==s[i] && j<n ){
    //         a += s[j] ;
    //         ss.insert(a);
    //         j++;
    //     }
    //     i = j-1 ;

    // }

    // cout<< ss.size() <<endl;
    vector<vector<int> > aa(26) ;
    for( int i=0;i<n;i++ ){
        aa[s[i]-'a'].pb(i) ;
    }

    int ans = 0 ;

    for( auto &x : aa){
        if(x.size()==0)     continue;
        int nn = x.size() ;
        int mx = 0 , cnt = 1 ;
        for( int i=0 ; i<nn ; i++ ){
            if( cnt>mx ){
                ans++ ;
                mx++;
            }
            if(x[i]==(x[i+1]-1)){
                cnt++;
            }
            else{
                cnt = 1 ;
            }
        }
    }

    cout<< ans <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
        solve();
    return 0;
}