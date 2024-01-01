#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin>>n;
    int mx = 1<<n , indx=0 ;
    string s[mx+1] , tmp , tm ;
 
    int i=0;
    while( i++<n ){
        tmp += '0';
    }
    s[indx++] = tmp;
    tmp.pop_back();
    tmp += '1' ;
    s[indx++] = tmp ; 
 
    i = n-1;
    while ( (i--)>0 ) {
        int indx_decrease = indx ;
        while ( (indx_decrease--) >0 ){
            tm = s[ indx_decrease ];
            tm[i] = '1' ;
            s[indx++] = tm ;
        }
    }
    
    for ( int i=0;i<indx; i++ ){
        cout<< s[i] << endl;
    }
 
 
}