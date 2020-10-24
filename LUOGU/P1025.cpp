#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int n,m,dp[500][10];
	cin>>n>>m;
	dp[0][0]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i>=j) dp[i][j] = dp[i-j][j] + dp[i-1][j-1];
		}
	}
	cout<<dp[n][m];
	return 0;
}
