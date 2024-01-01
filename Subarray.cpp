#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define fori(i,n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define  ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int k=1;

void pipra(){
	int n;	cin>>n;
	vector<int> v(n);
	for( int &x : v)	cin>>x;

	ll c = 0 ;
	for( int i=0;i<n-1;i++ ){
		int j=i+1;
		while( j<n && v[i]==v[j] ){
			j++;
		}
		c += (j-i) * (n-j) ;
		i=j-1;
	}
	cout<<"Case"<<" "<<k++<<":"<<" ";
	cout<<c<<endl;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}
