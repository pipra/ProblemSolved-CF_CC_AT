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
    vi a(10,0) , cnt(10,0);
    for( int i=0;i<n;i++ ){
        int x;  cin>>x;
        a[x%10]++;
    }
    if((a[1]>=3) || (a[0]>=2 && a[3]>0) || (a[0]>0 && a[1]>0 && a[2]>0) ){
        yes;    return;
    }

    // for( int x : a){
    //     cout<< x << " ";
    // }
    // cout<<endl;

    int need = 13 ;
    for( int i=0;i<10;i++ ){
        if(a[i]==0)     continue;
        for( int j=0;j<10;j++ ){
            if( (i!=j && a[j]==0) || (i==j && a[i]<2) )     continue ;
            int d = i+j ;
            if( d>need || abs(need-d)>9 )      continue;
            d = need-d ;
            if( (i==j && j==d && a[i]>2) || ( i!=j && j==d && a[j]>1) || (i!=j && a[d]>1 ) || ( i!=j && j!=d && i!=d && a[d]>0) ){
                // cout<< i << " " << j <<  " " << d <<endl;
                yes;    return;
            }
        }
    }
    need = 23 ;
    for( int i=0;i<10;i++ ){
        if(a[i]==0)     continue;
        for( int j=0;j<10;j++ ){
            if( (i!=j && a[j]==0) || (i==j && a[i]<2) )     continue ;
            int d = i+j ;
            if( d>need || abs(need-d)>9 )      continue;
            d = need-d ;
            if( (i==j && j==d && a[i]>2) || ( i!=j && j==d && a[j]>1) || (i!=j && a[d]>1 ) || ( i!=j && j!=d && i!=d && a[d]>0) ){
                // cout<< i << " " << j <<  " " << d <<endl;
                yes;    return;
            }
        }
    }

    no;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}



