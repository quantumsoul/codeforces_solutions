#include <bits/stdc++.h> 
using namespace std;
int mini(int a[],int n){
	int min = a[0];
	for(int i=0;i<n;++i){
       if(a[i]<min){
       	min = a[i];
       } 
	}
	return min;
}
int main(){
	int t;
	cin>>t;
	int k=0;
	int n;
	while(k<t){
		int a[100000];
	    int b[100000];
	    int c[100000];
		cin>>n;
        for(int i=0;i<n;++i){
        	cin>>a[i];
        }
        if(is_sorted(a,a+n)){
        	cout<<"YES"<<endl;
        }
        else{
        memcpy(b,a,sizeof(a));
        sort(b,b+n);
        int l=0;
        for(int j=0;j<n;++j){
        if(a[j]!=b[j]){
        	c[l]=a[j];
        	l++;
        }
        }
        int m=0;
        int min = mini(a,n);
        while(m<l){
        if(c[m]%min!=0){
        	cout<<"NO"<<endl;
        	break;
        }	
        ++m;
        }
        if(m==l){
        	cout<<"YES"<<endl;
        }
    }
		++k;
	}
}
