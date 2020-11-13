#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		int n,b,l;
		int flag=0;
		cin>>n;
		vector<int> v;
		int vis[5001]={0};
		vector<pair<int, int>> p;
		for(int j=0;j<n;++j){
			cin>>b; 
			v.push_back(b);
		}
		for(int m=0;m<n;++m){
			if(v[0]!=v[m]){
				flag=1;
				break;
			}
		}
		if(flag==1){
		for(int k=1;k<n;++k){	
			for(l=k+1;l<=n;++l){
			    if(v[k-1]!=v[l-1]&&(vis[l]!=1||vis[k]!=1)){ 
			    	p.push_back(make_pair(k,l)); vis[l]=1; vis[k]=1;
			    }
			}
			
		}
		cout<<"YES"<<endl;
		for(auto f:p)
			cout<<f.first<<" "<<f.second<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	}
}