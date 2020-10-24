#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int a,n,sum;
int flag;
int main(){
	cin>>n;
	priority_queue<int,vector<int>,greater<int> > q;
	for(int i=1;i<=n;i++){
		cin>>a; 
		q.push(a);
	}
	while(1){
		int b,c;
		b=q.top();
		q.pop();
		if(!q.empty()) c=q.top();
		else break;
		q.pop();
		sum+=b+c;
		q.push(b+c);
	}
	cout<<sum<<endl;
	return 0;
}
