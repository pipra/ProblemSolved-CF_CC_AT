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

void pipra(){
	ll a,b,n;	cin>>a>>b>>n;
	ll v[n];
	for( int i=0;i<n;i++ ){
		cin>>v[i];
	}

    if(a == 1){
    	cout<<1<<endl;
    	return;
    }

    ll ans = b;
    for( int i=0;i<n;i++ ){
        ans += min(a,v[i]);
        if(a<=v[i])	ans--;
    }
    cout<<ans<<endl;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}



// ll a,b,n;
//         cin>>a>>b>>n;
//         ll arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         if(a == 1){cout<<1<<endl;continue;}
//         ll time = b;
//         for(int i=0;i<n;i++){
//             time += min (a,arr[i]);
//             if(a<=arr[i])time--;
//         }
//         cout<<time<<endl;
