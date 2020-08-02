#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std; //hdu-2700
string str;
int cnt;
int main() {
	while(cin>>str){
		if(str=="#") break;
		cnt=0;
		for(int i=0;i<str.length();i++){
			if(str[i]=='1') cnt++;
		}
		if(str[str.length()-1]=='e' && cnt%2==0){
			str[str.length()-1]='0';
			cout<<str<<endl;
		}
		else if(str[str.length()-1]=='e' && cnt%2==1){
			str[str.length()-1]='1';
			cout<<str<<endl;
		}
		else if(str[str.length()-1]=='o' && cnt%2==0){
			str[str.length()-1]='1';
			cout<<str<<endl;
		}
		else{
			str[str.length()-1]='0';
			cout<<str<<endl;
		}
	}	
	
	return 0;
}
