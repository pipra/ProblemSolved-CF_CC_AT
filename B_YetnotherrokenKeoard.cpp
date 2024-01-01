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

    vector<int> small , cap ;
    int  n = s.size();  int ii = 0 ;

    for( char i : s ){
        if(i=='B'){
            // cout<< 1 <<endl;
            int nn = cap.size();
            s[ii] = '1';
            // ii++;
            if(nn==0){
                ii++;
                continue ;
            }
            s[cap[nn-1]] = '1' ;
            cap.pop();
        }
        else if(i=='b'){
            // cout<< 2 <<endl;
            int nn = small.size();
            s[ii] = '1' ;
            if(nn==0){
                ii++;
                continue ;
            }
            s[small[nn-1]] = '1' ;
            small.pop();
        }
        else{
            // cout<< 3 <<endl;
            if(i>='A' && i<='Z'){
                cap.pb(ii) ;
            }
            else{
                small.pb(ii);
            }
        }
        ii++;
    }


    for( char i : s ){
        if(i=='1')  continue;
        cout<< i ;
    }
    cout<<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}