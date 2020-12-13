#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		float d,k,l=0,m=0;
		int ans;
		int cnt=0;
		cin>>d>>k;
		while(l<=k*floor(d/k)&&m<=l<=k*floor(d/k)){
			if(sqrt(pow(k*floor(d/k)-m, 2.0)+pow(k*floor(d/k)-l, 2.0))<=d)
				break;
			if(cnt%2==0)
				m=m+k;
			else
				l=l+k;
			cnt++;
		}
		ans=floor((k*floor(d/k)-m)/k)+floor((k*floor(d/k)-l)/k);
		if(ans%2==0)
			cout<<"Utkarsh"<<endl;
		else
			cout<<"Ashish"<<endl;
	}
}