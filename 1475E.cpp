#include<bits/stdc++.h>
using namespace std;
/*unsigned long long fact(int n); 
  
unsigned long long nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 

unsigned long long fact(int n) 
{ 
    unsigned long long res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
}*/
typedef long long ll ;
#define INF 1000000007
 
ll f[100001]; 
  
ll pow(ll a, ll b, ll MOD) 
{ 
 ll x=1,y=a;  
 while(b > 0) 
 	{ 
 		if(b%2 == 1) 
 	{ 
 		x=(x*y); 
 		if(x>MOD) x%=MOD; 
 	} 
 	y = (y*y); 
 	if(y>MOD) y%=MOD;  
 	b /= 2; 
 	} 
 return x; 
} 
  
/* Modular Multiplicative Inverse 
 Using Euler's Theorem 
 a^(phi(m)) = 1 (mod m) 
 a^(-1) = a^(m-2) (mod m) */ 
ll InverseEuler(ll n, ll MOD) 
{ 
 return pow(n,MOD-2,MOD); 
} 
  
ll C(ll n, ll r, ll MOD) 
{ 
  
 return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD; 
} 
int main(){
	f[0] = 1; 
	for(int i = 1 ; i <= 100000 ; i++) 
		f[i] = (f[i-1]*i)%INF;	 
	int t;
	cin>>t;
	while(t--){
		unsigned long long  n,k,ans=0,v=0,ans1=1,flag=0;
		cin>>n>>k;
		unsigned long long a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		for(int m=0;m<n;++m){
			if(m>0){
				if(a[m]!=a[m-1]){
					flag=1;
					break;
				}
			}
		}
		if(flag==0){
			cout<<C(n,k,INF)<<'\n';
		}
		else{
		sort(a,a+n);

		for(int c=0;c<n;++c){
			if(a[c]==a[n-k]){
				ans++;
			}
		}
		for(int c=n-k;c<n;++c){
			if(a[c]==a[n-k]){
				v++;
			}
		}
		cout<<C(ans,v,INF)<<'\n';
	}
	}
}