#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	int x,y;
	int sum=0;
	cin>>x>>y;
	if(y%x!=0){
		cout<<0<<endl;
		return 0;
	}	 
	else{
		int t=y/x;
		for(int i=1;i<=sqrt(t);i++){
			if(t%i==0){
				int a,b;
				a=i,b=t/i;
				if(gcd(b,a)==1){
					sum+=2;
				}
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}
