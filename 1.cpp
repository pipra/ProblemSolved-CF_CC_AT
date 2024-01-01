//Code never lies, LET'S START
#include<bits/stdc++.h>
using namespace std;
     
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
     
#define  ll                long long int
#define  ff                first
#define  ss                second
#define  pb                push_back
#define  yes               cout<<"YES"<<endl
#define  no                cout<<"NO"<<endl
#define  endl              "\n"
#define  all(x)            x.begin(),x.end()
#define  loop(i,a,b)       for( ll i=a;i<=b;i++ )
#define  loop2(i,b,a)      for( ll i=b;i>=a;i-- )
#define  M                 1000000007
#define  vll               vector<ll>
#define  pll               pair<ll,ll>
#define  vp                vector<pll>
#define  FastIO            ios_base::sync_with_stdio(false); cin.tie(NULL);
     
const   int    N = 2e5 + 5;
const   int    MX = 1e9 + 10;
const   ll     MXX = 1e18;
     
void pipra(){
    set<ll> s;
	loop(i,1,5){
		s.insert(i);
	}

	// s.erase(1);
	// s.erase(4);
	s.erase(4);

	loop(i,100,200)	s.insert(i) ;

	// s.erase(6) ;
	auto it = s.lower_bound(4) ;
	auto itq = s.upper_bound(150) ;
	// it--;
	// it--;

	// cout<< it <<endl;

	cout<< (*it) <<endl;
	cout<< (*itq) <<endl;

	for( auto i : s )	cout<< i <<' ';


	// auto it = s.upper_bound(1);
	// if(it==s.begin()){
	// 	cout<<"NO"<<endl;	return;
	// }
	// it--;
	// cout<<(*it)<<endl;
}
     
int main(){
    //Code_by_Pipra
    FastIO;
        pipra();
    return 0;
}