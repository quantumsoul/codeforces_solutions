#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        double ans=0,p;
        int n,m,r,cnt=0,v;
        cin>>n>>m;
        v=n;
        vector<double> a,temp;
        double prev;
        while(n--){
            double b;
            cin>>b;
            a.push_back(b);
        }
        if(is_sorted(a.begin(),a.end())){
            cout<<"1.000000"<<'\n';
            while(m--)
                cin>>r>>p;
            continue;
        }
        temp = a;
        sort(temp.begin(),temp.end());
        while(v--){
            if(a[v]!=temp[v]){
                cnt=v+1;
                break;
            }
        } 
        while(m--){
            cin>>r>>p;
            if(r>=cnt){
                if(ans==0){
                    ans+=p;
                    prev = 1-p;
                }
                else{
                    ans+=(prev)*p;
                    prev = prev*(1-p);
                }
            }
        }
        cout<<fixed<<setprecision(6)<<ans<<'\n';
    }
}