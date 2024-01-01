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

const int N = 10E6 ;
const int sz = 10E3 ; 
vector<bool> check(N) ;
vector<int> palindrome;

// bool palindrome_check( string aa ){
//     int n = aa.size();
//     for( int i=0;i<n/2;i++ ){
//         if( aa[i]!=aa[n-i-1] )   return false;
//     }
//     return true;
// }

// void sieve(){
//     for( int i=3;i<=sz;i++ ){
//         if( check[i]==false ){
//             for( int j=i*i;j<=N;j+= i+i ){
//                 check[j] = true ;
//             }
//         }
//     }
//     for( int i=3;i<=N;i+=2 ){
//         if( check[i]==false ){
//             string a = "";
//             int x = i ;
//             while(x>0){
//                 int rem = x%10 ;
//                 a += rem+'0' ;
//                 x /= 10 ;
//             }
//             if( palindrome_check(a) ){
//                 cout<< a << endl;
//                 palindrome.pb(a.size()) ;
//             }
//         }
//     }
// }

void solve(){
    int n;  cin>>n;
    int odd=n , even=0 ;
    
    if(n>4){
        odd--;
        even++;
    }

    cout<< even << " " << odd <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    // sieve();
    // cout<<palindrome.size()<<endl;

    int tt;     cin>>tt;
    while(tt--)
        solve();
    return 0;
}