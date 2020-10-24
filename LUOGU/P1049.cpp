#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int v,n;
int a[40],dp[40][20100];
int dfs(int i,int j){
	if(dp[i][j]>=0) return dp[i][j];
	int res;
	if(i==n){
		res=0;
	}
	else if(j<a[i]){
		res=dfs(i+1,j);
	}
	else{
		res=max(dfs(i+1,j),dfs(i+1,j-a[i])+a[i]);
	}
	return dp[i][j]=res;
}
int main(){
	memset(dp,-1,sizeof(dp));
	cin>>v>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<v-dfs(0,v);
	return 0;
}
