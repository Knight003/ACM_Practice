#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
const int maxn=1000;
typedef long long ll;
ll W,n;
ll w[maxn],v[maxn],V[maxn],dp[30][30010];
ll dfs(ll i,ll j){
	if(dp[i][j]>=0){
		return dp[i][j]; 
	}
	int res;
	if(i==n){
		res=0;
	}
	else if(j<w[i]){
		res=dfs(i+1,j);
	}
	else{
		res=max(dfs(i+1,j),dfs(i+1,j-w[i])+V[i]);
	}
	return dp[i][j]=res;
}
int main(){
	memset(dp,-1,sizeof(dp));
	cin>>W>>n;
	for(int i=0;i<n;i++){
		cin>>w[i]>>v[i];
		V[i]=w[i]*v[i];
	}
	for(int i=0;i<n;i++){
		
	}
	cout<<dfs(0,W);
	return 0;
}
