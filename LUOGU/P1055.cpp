#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
	string number;
	int a[1000],sum=0,count=0;
	cin>>number;
	for(int i=0;i<number.size()-1;i++){
		if(number[i]>='0'&&number[i]<='9'){
			a[count]=number[i] - '0';
			count++;
		}
	}
	if(number[number.size()-1]=='X'){
		a[count]=10;
		count++;
	}
	else{
		a[count]=number[number.size()-1]-'0';
		count++;
	}
	
	for(int i=0;i<count-1;i++){
		sum+=a[i]*(i+1);
	}
	int mod;
	mod=sum%11;
	if(mod!=10){
		if(mod==a[count-1]) cout<<"Right";
		else {
			number[number.size()-1]=mod+'0';
			cout<<number;
		}
	}
	else{
		if(mod==a[count-1]) cout<<"Right";
		else{
			number[number.size()-1]='X';
			cout<<number;
		}
	}
	return 0;
}
