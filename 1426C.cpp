#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long u;
    cin>>u;
    while(u--){
        long long n;
        long double p, f;
        cin>>n;
        if(n==1){
            cout<<"0\n";
        }
        else if(modf(sqrt(n),&p)==0){
            cout<<(long long int)(2*sqrt(n))-2<<"\n";
        }
        else{
            cout<<(long long int)(2*sqrt(n))-1<<"\n";
        }
    }
}