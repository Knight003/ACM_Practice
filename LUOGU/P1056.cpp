 #include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<cstring> 
using namespace std;
int main(){
	int M,N,K,L,D;
	int x[5000]={0},y[5000]={0},a[5000][3],b[5000][3];
	cin>>M>>N>>K>>L>>D;
	for(int i=1;i<=D;i++){
		cin>>a[i][1]>>a[i][2];
		cin>>b[i][1]>>b[i][2];
		if(a[i][1]==b[i][1]){
			if(a[i][2]<b[i][2]){
				x[a[i][2]]++;
			}
			else{
				x[b[i][2]]++;
			}
		}
		if(a[i][2]==b[i][2]){
			if(a[i][1]<b[i][1]){
				y[a[i][1]]++;
			}
			else{
				y[b[i][1]]++;
			}
		}
	}
	int row[5000],col[5000];
	int max=0,maxn;
	for(int i=1;i<=K;i++){
		for(int j=1;j<=M;j++){
			if(y[j]>max){
				max=y[j];
				maxn=j;
			} 
		}
		row[i]=maxn;
		max=0;
		y[maxn]=0;
	}
	for(int i=1;i<=L;i++){
		for(int j=1;j<=N;j++){
			if(x[j]>max){
				max=x[j];
				maxn=j;
			}
		}
		col[i]=maxn;
		max=0;
		x[maxn]=0;
	}
	sort(col+1,col+L+1);
	sort(row+1,row+K+1);
	for(int i=1;i<=K;i++){
		if(i!=K) printf("%d ",row[i]);
		else printf("%d\n",row[i]);
	}
	for(int i=1;i<=L;i++){
		if(i!=L) printf("%d ",col[i]);
		else printf("%d",col[i]);
	}
	
	return 0;
} 
