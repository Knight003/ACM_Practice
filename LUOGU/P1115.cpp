#include <cstdio>
#include <iostream>
#include <queue>
#include <stack>
#include <cstring>
using namespace std;
int main(){
	int sum=0,ans,n;
	cin>>n;
	int now;
	cin>>now;
	ans=now;
	if(now>=0) sum+=now;
	for(int i=1;i<n;i++){
		cin>>now;
		sum+=now;
		if(sum>ans) ans=sum;
		if(sum<0) sum=0;
	}
	cout<<ans;
	
	return 0;
}
