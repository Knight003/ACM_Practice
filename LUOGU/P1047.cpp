#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main(){
	int L,M,head,tail,tree[10000]={0};
	cin>>L>>M;
	for(int i=0;i<=L;i++){
		tree[i]=1;
	}
	for(int i=0;i<M;i++){
		cin>>head>>tail;
		for(int j=head;j<=tail;j++){
			if(tree[j]==1) tree[j]=0;
		}
	}
	int sum=0;
	for(int i=0;i<=L;i++){
		if(tree[i]==1) sum++;
	}
	cout<<sum<<endl;
	
	return 0;
} 
