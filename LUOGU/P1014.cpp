#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int n,sum=0,cnt=0;
	scanf("%d",&n);
	for(int i=1;i<=1e7+10;i++){
		sum+=i;
		cnt++;
		if(sum>=n) break;
	}
	if(cnt%2==1){
		printf("%d/%d",sum-n+1,cnt+n-sum);
	}
	else {
		printf("%d/%d",cnt+n-sum,sum-n+1);
	}
	
	return 0;
}
