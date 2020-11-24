#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.first > b.first); 
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		int n,ans1=0,ans2=0;
		int ans=0;
		cin>>n;
		int a[n],b[n];
		for(int j=0;j<n;++j){
			cin>>a[j];
		}
		for(int j=0;j<n;++j){
			cin>>b[j];
		}
		vector<pair<int,int>> v;
		for (int k=0; k<n; k++) 
            v.push_back( make_pair(a[k],b[k]) );
        sort(v.begin(),v.end(),sortbysec);
		for(int j=0;j<n;++j){
			ans1=max(ans,v[j].first);
			ans2=ans2+v[j].second;
			if(ans1<=max(ans,ans2)){
				ans=ans1;
				ans2=ans2-v[j].second;
			}
			else{
				ans=max(ans,ans2);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}