#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
	    long long n,sum=0,ans=LLONG_MAX,temp;
	    cin>>n;
	    long long a[n];
	    for(long long j=0;j<n;++j){
	    	cin>>a[j];
	    }
	    for(long long j=0;j<n-1;++j){
	    	sum+=abs(a[j]-a[j+1]);
	    }
	    for(long long j=n-1;j>=0;--j){
	    	if(j==0){
	    		temp=sum-abs(a[j]-a[j+1]);
	    		if(temp<ans)
	    			ans=temp; 
	    		break;
	    	}
	    	if(j==n-1){
	    		temp=sum-abs(a[j]-a[j-1]);
	    		if(temp<ans)
	    			ans=temp; 
	    	}
	    	else{
	    		temp=sum-abs(a[j]-a[j-1])-abs(a[j+1]-a[j])+abs(a[j+1]-a[j-1]);
	    		if(temp<ans)
	    			ans=temp; 
	    	}
	    }
	    cout<<ans<<endl;
	}
}