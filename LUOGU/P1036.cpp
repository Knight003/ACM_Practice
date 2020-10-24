#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int x){
	int sqr;
	sqr=(int)sqrt(x*1.0);
	if(x<=1) return false;
	for(int i=2;i<=sqr;i++){
		if(x%i==0) return false;
	}
	return true;
}
int n,k,a[100],p[100],sum,count;
bool num[100];
void dfs(int index,int num,int ant){
	if(index==n || ant==k){
		if(isprime(num) && ant==k){
			count++;
		}
		return ;
	}
	dfs(index+1,num+a[index],ant+1);
	dfs(index+1,num,ant);
	
}
int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	dfs(0,0,0);
	printf("%d",count);
	return 0;
} 
