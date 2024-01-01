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
    int n = s.size();

    int ans = n ;
    for( char i='a' ; i<='z' ; i++ ){
        int pos = 0 , mx = 0 ;
        for( int j=0 ; j<n ; j++ ){
            if(s[j]==i){
                mx = max(mx,j-pos) ;
                pos = j+1 ;
            }
        }
        mx = max(mx,n-pos) ;
        int c=0;
        while(mx>0){
            mx /= 2 ;
            c++;
        }
        ans = min(ans,c) ;
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