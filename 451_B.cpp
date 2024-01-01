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
	int n;  cin>>n;
    vi v(n);
    vector<pair<int,int>> vp;

    fori(i,n){
        cin>>v[i];
        vp.pb({v[i],i+1});
    }

    if( is_sorted(v.begin(),v.end()) ){
        cout<<"yes\n"<<1<<" "<<1<<endl;
        return;
    }

    int start=0 , end=0 ;
    sort( vp.begin(),vp.end() );
    auto it = vp.begin(); 

    int indx = 0 ;
    bool c = true ;
    while( it!=vp.end() ){
        if( it->second != indx+1 && c ){
            start = indx ;
            c = false ;
        }
        if( it->second !=indx+1 ){
        	end = indx ;
        }
        ++indx;
        ++it;
    }
    it = vp.begin()+start;
    // cout<<start<<" ";
    indx = end ;
    // cout<<end<<endl;
    while( it<vp.begin()+end ){
    	// cout<<indx<<" "<<it->first<<" "<<it->second<<endl;
    	if( it->second != indx+1 ){
    		cout<<"no"<<endl;
    		return;
    	}
    	++it;
    	--indx;
    }
    cout<<"yes"<<endl;
    cout<<start+1<<" "<<end+1<<endl;
}

int32_t main(){
	ios;
		pipra();
	return 0 ;
}

