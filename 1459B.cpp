#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[1005];
    cin>>n;
    a[1]=4;
    for(int i=2;i<=n;++i){
        if(i%2==0){
            a[i]=((i+2)/2)*((i+2)/2);
        }
        else
            a[i]=4*a[i-1]-a[i-2];
    }
    cout<<a[n];
}