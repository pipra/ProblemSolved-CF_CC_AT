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
    vi a(n);
    for( int &i : a)    cin>>i;

    int mex=-1;
    for( int i=0;i<n;i++ ){
        if(a[i]!=i){    mex = i ;   break;}
    }
    if(mex==-1)         mex = n ;

    cout<< mex <<endl;
    cout.flush();

    int bob;    cin>>bob;
    while(bob!=-1){
        cout<< bob <<endl;
        cout.flush();
        cin>>bob;
    }

    // int req=mex, turn=0, condition =(2*n)+1 , bob=1e9+7 ;
    // bool alice = true ;
    // while(true){
    //     if(turn>condition or bob==-1)   break;
    //     if(alice){
    //         if(bob<=req){
    //             cout<< bob <<endl;
    //             cout.flush();
    //         }
    //         else{
    //             cout<< req <<endl;
    //             cout.flush();
    //         }
    //     }
    //     else{
    //         cin>>bob;
    //     }
    //     alice ^= true;
    //     turn++;
    // }
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}