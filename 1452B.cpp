#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		long long n,s=0,ans=0;
		cin>>n;
		long long a[n];
		for(long long j=0;j<n;++j){
			cin>>a[j];
		}
		sort(a,a+n);
		for(long long j=1;j<n;++j){
            s+=a[n-1]-a[j];
		}
		if(a[0]>s){
			if((a[0]-s)%(n-1)==0)
				ans=0;
			else
				ans=n-1-((a[0]-s)%(n-1));
		}
		else
			ans=s-a[0];
		cout<<ans<<endl;
	}
}