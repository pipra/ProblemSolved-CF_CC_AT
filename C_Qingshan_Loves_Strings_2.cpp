//PIPRA
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vi;
#define pb push_back
#define po pop_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    int n;      cin>>n;
    string s;   cin>>s;

    string add = "01" ;
    
    int k = 0 , i=0 ;
    vector<int> ans ;
    bool c = false ;

    if( n%2 ){
        cout<<-1<<endl;
        return;
    }

    while( k<300 ){

        int i=0 , n = s.size();
        int nn = n/2 ;
        bool check = true ;
        int r = n-1 ;

        while( i<nn ){
            if( s[i]==s[r] ){
                if( s[i]=='0' ){
                    check = false ;
                    s.insert( r+1 , "01" );
                    ans.pb( r+1 ) ;
                    break;
                }
                else{
                    check = false ;
                    s.insert( i, "01" );
                    ans.pb( i ) ;
                    break;
                }
            }
            i++;    r--;
        }
        
        // cout<< s <<endl;

        if( check ){
            cout<< ans.size() <<endl;
            for( int &x : ans ){
                cout<< x <<" ";
            } 
            cout<<endl;
            return;
        }

        k++;
    }

    cout<<-1<<endl;

}

int main(){
    //Code_by_Pipra
    Faster;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}