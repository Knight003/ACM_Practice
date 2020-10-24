#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;
bool cmp(string a,string b){
	return a+b>b+a;
}
int main(){
	int n;
	string num[50];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	sort(num,num+n,cmp);
	for(int i=0;i<n;i++){
		cout<<num[i];
	}
	return 0;
}
