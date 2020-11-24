#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		int a,b,flag=0,cnt=0;
		cin>>a>>b;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		string s;
		getline(cin,s);
		int ans=a;
		for(int j=0;j<s.length();++j){
			if(s.at(j)=='1'){
				flag=1;
				if(j>1){
				    if(s.at(j-1)=='0'){
				        ans=min(ans+cnt*b,ans+a);
				        cnt=0;
			        }
			    }
			}
			if(s.at(j)=='0'&&flag==1){
				cnt++;
			}
		}
		if(flag==0){
			cout<<0<<endl;
		}
		else
		    cout<<ans<<endl;
	}
}