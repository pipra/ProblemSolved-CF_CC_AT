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
    vi a(n);    int pos=0,neg=0,zero=0;
    for( int &x : a ){
        cin>>x;
        if(x>0)         pos++;
        else if(x<0)    neg++;
        else            zero++;
    }

    vector<pair<int,int> > ans;
    if(pos+zero == n){
        for( int i=1;i<n;i++ ){
            ans.pb({i+1,i}) ;
        }
    }
    else if(neg+zero == n){
        for( int i=n-2;i>=0;i-- ){
            ans.pb({i+1,i+2}) ;
        }
    }
    else{
        
        int mx=-21,mn=21,i=0,mx_ind = 0 , mn_ind = 0 ;
        for( int &x : a ){
            if(x>mx){   mx = x ;    mx_ind = i ; }
            if(x<mn){   mn = x ;    mn_ind = i ; }
            i++;
        }
        int nn=0,np=0;
        if(mx>abs(mn))  nn=5 ;
        else            np=5 ;
        if(pos+nn<=12){
            for( i=0;i<nn;i++ ){
                ans.pb({mn_ind+1,mn_ind+1}) ;
            }
            for( i=0;i<n;i++ ){
                if(a[i]>0){
                    ans.pb({i+1,mn_ind+1}) ;
                }
            }
            for( i=n;i>1;i-- ){
                ans.pb({i-1,i}) ;
            }
        }
        else{
            for( i=0;i<np;i++ ){
                ans.pb({mx_ind+1,mx_ind+1}) ;
            }
            for( i=0;i<n;i++ ){
                if(a[i]<0){
                    ans.pb({i+1,mx_ind+1}) ;
                }
            }
            for( i=1;i<n;i++ ){
                ans.pb({i+1,i}) ;
            }
        }
    }

    cout<< ans.size() <<endl;
    for( auto &i : ans ){
        cout<< i.first << " " << i.second <<endl;
    }
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}