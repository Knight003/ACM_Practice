#include<string>
#include<iostream>
#include<cstdio>
using namespace std;
string a,b,c;
bool use[30],table[30];
int str[30],s=0;
int main(){
	cin>>a>>b>>c;
	for(int i=0;i<a.size();i++){
		if(!use[a[i]-'A']&&!table[b[i]-'A']){
			use[a[i]-'A']=table[b[i]-'A']=true;
			str[a[i]-'A']=b[i];
			s++;
		}
		else if(str[a[i]-'A']!=b[i]){
			cout<<"Failed";
			return 0;
		}
	}
	if(s!=26){
		cout<<"Failed";
		return 0;
	}
	for(int i=0;i<c.size();i++){
		printf("%c",str[c[i]-'A']);
	}
	return 0;
}
