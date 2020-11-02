#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        int x,n,m;
        cin>>x>>n>>m;
        if(x<=10&&m>0){
            cout<<"YES"<<endl;
        }
        else{
        for(int j=0;j<n;++j){
            x=(x/2)+10;
        }
        for(int k=0;k<m;++k){
            x=x-10;
        }
        if(x<=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    }
 
    return 0;
}