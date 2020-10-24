#include<bits/stdc++.h>
using namespace std;
int n;
string temp="yizhong";
char a[150][150],ans[150][150];
int dx[8]={0,0,-1,1,1,1,-1,-1};
int dy[8]={1,-1,0,0,1,-1,1,-1};
void dfs(int x,int y){
	for(int i=0;i<8;i++){
		int flag=1;
		for(int j=1;j<=6;j++){
			int nx=x+j*dx[i];
			int ny=y+j*dy[i];
			if(nx>=n || nx<0 || ny>=n || ny<0){
				flag=0;
				break;
			}
			if(a[nx][ny]!=temp[j]){
				flag=0;
				break;
			}
		}
		if(flag==0) continue;
		for(int j=0;j<=6;j++){
			int nx=x+j*dx[i];
			int ny=y+j*dy[i];
			ans[nx][ny]=a[nx][ny];
		}
	}
	return ;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]=='y') dfs(i,j);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(ans[i][j]==0) ans[i][j]='*';
			cout<<ans[i][j]; 
		}
		cout<<endl;
	}
	return 0;
} 
