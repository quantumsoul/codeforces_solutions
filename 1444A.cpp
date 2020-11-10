#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		long long p,q,n,res;
		long long ans=0;
		cin>>p>>q;
		n=q;
		if(p%q!=0){
			cout<<p<<endl;
		}
		else{
			for(long long j=2;j<=sqrt(q);++j){
				long long r=0;
				long long res=p;
				while(n%j==0){
					n=n/j;
					r=1;
				}
				if(r==1){
					while((res/j)%q==0)
						res=res/j; 

					if(ans<res/j)
						ans=res/j;
				}	
			}
			if(n>1){
				while((p/n)%q==0)
						p=p/n; 

					if(ans<p/n)
						ans=p/n;
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}