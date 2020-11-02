#include <bits/stdc++.h>
using namespace std;
vector<int> adj[200005];
int n,k,u,v,depth[200005],s[200005],det[200005],vis[200005];
long long h=0;
int cmp(int a,int b){return a>b;}
int dfs(int k, int f)
{
	depth[k]=depth[f]+1;
	vis[k]=1;
    s[k]=1;
	for(int i=0;i<adj[k].size();++i)
	{
		if(!vis[adj[k][i]])
		{
			s[k]+=dfs(adj[k][i],k);
		}
	}
	
	det[k]=s[k]-depth[k];
	return s[k];
 
}
int main()
{
	int dfs(int,int);
	cin>>n>>k;
	for(int i=1;i<n;++i)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,0);
	nth_element(det+1,det+n-k,det+n+1,cmp);
    for (int i=1;i<=n-k;++i)
		h+=det[i];
	cout<<h;
}