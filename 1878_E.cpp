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

int binary_search( int ind, int k, int n, vector< vector<int> > &vv ){
	int ans = -1 ;
	// ind-=1;
	int left = ind, right= n-1 ;
	int num = 0 ;

	while(left<=right){
		num = 0 ;
		int m= left + (right-left)/2 ;
		for( int i=30;i>=0;i-- ){
			// int bit=1;
			int bitS = vv[m][i] - (ind==0 ? 0 : vv[ind-1][i]);
			if(!bitS){
				num +=(1<<i) ;
			}
		}
		if(num>=k){
			ans = m ;
			left = m+1;
		}
		else	right = m-1 ;
	}
	if(ans!=-1)	ans++;
	return ans;
}

void pipra(){

	int n;	cin>>n;
	vector<int> v(n) ;
	vector< vector<int> > vv(n,vector<int>(31,0)) ;

	for( int i=0;i<n;i++ ){
		// cin>>v[j];
		int x;	cin>>x;
		//storing bit if an index of bit 1 then it set with 0 and another set with 1
		for( int j=30;j>=0;j-- ){
			if( (x&(1<<j))==(1<<j) )	vv[i][j] = 0 ;
			else	vv[i][j] = 1 ;
		}
	}

	//preCalculate the index of ones
	for( int i=1;i<n;i++ ){
		for(int j=30;j>=0;j-- ){
			vv[i][j] += vv[i-1][j];
		}
	}

	int q ;	cin>>q;
	while(q--){
		int ind,k;	cin>>ind>>k;
		ind--;
		cout<< binary_search( ind,k,n,vv )<<" ";
	}
	cout<<endl;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}

// 2 -1 5 
// 1 5 2 2 
// 2 6 -1 5 
