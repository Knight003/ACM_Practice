#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int n,a[110],b[110];
	int sum=0,aver; 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	aver=sum/n;
	for(int i=1;i<=n;i++){
		b[i]=a[i]-aver;
	}
	int cnt=0;
	for(int i=1;i<=n-1;i++){
		if(b[i]!=0){
			b[i+1]+=b[i];
			b[i]=0;
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return  0;
}

