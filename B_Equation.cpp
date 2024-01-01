//PIPRA
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int> 
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define fori(i,n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define  ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void pipra(){
    double a,b,c;      cin>>a>>b>>c;

    cout<< fixed << setprecision(10);

    if( !a && !b && !c ){
        cout<< -1 <<endl;       return;
    }

    if( !a && !b ){
        cout<< 0 <<endl;       return;
    }

    if( !a && b!=0 ){
        cout<<"1\n" << (-c)/b <<endl;       return;
    }

    double  discri = (b*b) - (4*a*c) ;
    if( discri<0 ){
        cout<< 0 <<endl;        return;
    }

    if( discri==0 ){
        cout<<"1\n" << (-b)/(2*a) ;     return;
    }

    // cout<< (b*b) <<endl;
    double root = sqrt( discri ) ;
    // cout<<root<<endl;
    double root1 = (-b+root) / (2*a) ;
    double root2 = (-b-root) / (2*a) ;

    if( root2<root1 )       swap( root1,root2 ) ;

    cout<<"2\n"<<root1<<"\n"<<root2 ;
}

int32_t main(){
    ios;
        pipra();
    return 0;
}