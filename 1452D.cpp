#include<bits/stdc++.h>
using namespace std;
const long long m = 998244353;
long long add(long long a, long long b)
{
    a += b;
    while(a >= m) 
    	a -= m;
    while(a < 0) 
    	a += m;
    return a;
}

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a%m;
        a = a * a%m;
        b >>= 1;
    }
    return res;
}
int main(){
	long long n;
	cin>>n;
	long long f[n];
	f[0]=1;
	f[1]=1;
	for(long long i=2;i<=n;++i){
		f[i]=add(f[i-1],f[i-2]);
	}
	cout<<f[n-1]*binpow(binpow(2,n),m-2)%m;
}