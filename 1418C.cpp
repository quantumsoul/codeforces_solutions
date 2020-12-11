#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		int n,ans=0,flag=0;;
		cin>>n;
		int a[n];
		for(int j=0;j<n;++j){
			cin>>a[j];
		}
		for(int j=0;j<n;++j){
			if(j==0){
				if(a[j]==1){
					ans++; 
				}
			}
			else{
				if(a[j]==1){
					flag++;
					if(flag>2){
						ans++; 
					    flag=0;
					}
				}
				else
					flag=0;
			}
		}
		cout<<ans<<endl;
	}
}