#include <bits/stdc++.h> 
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
	int n;
	cin>>n;
	int ne;
	if(n%4!=0){
		ne = n/4 + 1;
	}
	else{
		ne = n/4;
	}
	int k=0;
	while(k<n){
		if(k<(n-ne)){
			cout<<"9";
		}
		else{
			cout<<"8";
		}
		++k;
	}
	cout<<endl;
}
}