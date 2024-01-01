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

    cout<<fixed<<setprecision(7);

    int n;  cin>>n;
    double width,height;     cin>>width>>height;
    double ans=0;
    vector<double> a(n);
    for( double &x : a)     cin>>x;
    for( int i=0;i<n;i++ ){
        ans += 0.5 * width * height ;
    }
    double average = width/height ;
    sort(a.begin(),a.end());
    for( int i=1;i<n;i++ ){
        if( (a[i]-a[i-1])<height ){
            double new_height = height - (a[i]-a[i-1]) ;
            double new_width = 0.5*new_height * average ;
            ans -= new_height * new_width ;
        }
    }

    cout<< ans <<endl;

    // cout<< (200000-.250000000) <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}