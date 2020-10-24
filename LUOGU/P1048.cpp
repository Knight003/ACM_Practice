#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int t,m;
int w[105],v[105];
int dp[105][1100];
int dfs(int i,int j){
	if(dp[i][j]>=0){
		return dp[i][j];
	}
	int res;
	if(i==m){
		res=0;
	}
	else if(j<w[i]){
		res=dfs(i+1,j);
	}
	else{
		res=max(dfs(i+1,j),dfs(i+1,j-w[i])+v[i]);
	}
	return dp[i][j]=res;
}
int main(){
	cin>>t>>m;
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<m;i++){
		cin>>w[i]>>v[i];
	}
	cout<<dfs(0,t);
	return 0;
}
