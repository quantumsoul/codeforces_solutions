#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t;
	cin>>t;
	for(int j=0;j<t;++j){
		int flag=0;
        int n;
        cin>>n;
        vector< vector<int> > a;
        a.resize(n); 
        for(int i = 0; i < n; ++i)
            a[i].resize(n); 
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%1d", &a[i][j]);
            }
        }
  
        for(int l=0;l<n-1;++l){
        	for(int m=0;m<n-1;++m){
        		if((a[l][m]==1)){
        			if(a[l+1][m]==0&&a[l][m+1]==0){
        				cout<<"NO"<<endl;
        				flag=1;
        				break;
        			}
        		}
        	}
        	if(flag==1){
        		break;
        	}
        }
        if(flag==0){
        	cout<<"YES"<<endl;
        }
    }
    return 0;
}