#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int m;
	cin>>m;
	m*=2;
	for(int i=2000;i>1;i--){
		if(m%i==0 && (m/i + 1 - i)%2==0 && i*i<=m){
			cout<<(m/i-i+1)/2<<" "<<(m/i-i+1)/2+i-1<<endl;
		}
	}
	
	return 0;
}
