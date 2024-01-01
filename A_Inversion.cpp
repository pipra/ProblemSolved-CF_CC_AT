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
    n--;

    int ans = 0 ;
    for( int i=0;i<n;i++ ){
        if( s[i]=='>' ){
            ans++;
            int c = 1 ;
            int j = i+1 ;
            while(s[j]==s[i] && j<n){
                c++;
                ans += c ;
                j++;
            }
            i = j-1 ;
        }
    }

    cout << ans << endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
        solve();
    return 0;
}