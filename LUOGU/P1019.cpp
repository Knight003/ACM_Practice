#include<bits/stdc++.h>
using namespace std;
int n,ans;
string word[100],start;
int used[100];
bool check(string a,string b,int c){
	int len=a.size();
	for(int i=0;i<c;i++){
		if(a[len-c+i]!=b[i]) return false;
	}
	return true;
}
void add(string &s,string m,int k){
	int lens=m.size();
	for(int i=k;i<lens;i++){
		s+=m[i];
	}
}
void dfs(string now){
	int lang=now.size();
	ans=max(ans,lang);
	for(int i=0;i<n;i++){
		if(used[i]>=2) continue;
		int lenword=word[i].size();
		for(int j=1;j<=lenword;j++){
			if(check(now,word[i],j)){
				string temp=now;
				add(temp,word[i],j);
				if(temp==now) continue;
				used[i]++;
				dfs(temp);
				used[i]--;
			}
		}
	}
	
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>word[i];
	}
	cin>>start;
	dfs(start);
	cout<<ans;
	return 0;
}
