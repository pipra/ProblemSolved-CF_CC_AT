
#include<bits/stdc++.h>
using namespace std;

void solve(){
    char cvh; cin>>cvh;
    int nn;  cin>>nn;

    for( int i = 1 ; i<9 ; i++ ){
        if(i==nn)    continue ;
        cout<< cvh << i <<endl;
    }


    for( int i=97 ; i<105 ; i++ ){
        if(cvh==(char)i)    continue;
        cout<< (char)i << nn <<endl;
    }
}

int main(){
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}