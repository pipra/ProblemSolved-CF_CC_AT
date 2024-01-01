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

// map<int,int> mp;

// void divisor( int n ){
//     for( int i=2;i*i<n;i++ ){
//         // if(n%i==0){
//             while(n%i==0){
//                 n /= i ;
//                 mp[i]++;
//             }
//         // }
//     }
//     if(n!=1)    mp[n]++;
// }

void solve(){
    int n;  cin>>n;
    map<int,int> mp;
    int x;
    for( int i=0;i<n;i++ ){
        cin>>x;
        // divisor(x);
        for( int j=2;j*j<=x;j++ ){
            // if(n%i==0){
                while(x%j==0){
                    x /= j ;
                    mp[j]++;
                }
            // }
        }
        if(x!=1)    mp[x]++;
    }

    int ans=0, rem=0;
    for( auto i : mp){
        ans += i.ss / 2 ;
        rem += i.ss % 2 ;
    }
    ans += rem/3;
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