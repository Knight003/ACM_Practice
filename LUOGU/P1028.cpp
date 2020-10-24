#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int n,f[2000]={0};
	cin>>n;
	f[0]=1;
	f[1]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i/2;j++){
			f[i]+=f[j];
		}
		f[i]++;
	}
	cout<<f[n];
	return 0;
}
