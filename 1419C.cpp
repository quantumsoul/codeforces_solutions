#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		int n,x,aj,ct=0,sum=0;
		vector<int> a;
		cin>>n>>x;
		for(int j=0;j<n;++j){
			cin>>aj;
			a.push_back(aj);
		}
		sort(a.begin(),a.end());
		for(int k=0;k<n;++k){
			if(a[k]==x){
				ct++;
			}
			sum+=(x-a[k]);
		}
		if(ct==n){
			cout<<0<<endl;
		}
		else if(ct>0){
			cout<<1<<endl;
		}
		else if(sum==0){
			cout<<1<<endl;
		}
		else{
			cout<<2<<endl;
		}
	}
	return 0;
}