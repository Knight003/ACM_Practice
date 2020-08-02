#include<cstdio>
#include<iostream>
#include<cstring>
#include<set>   //hdu-2609 
using namespace std;
const int maxn=1e5+10;
char s[maxn];
set<string> m;
int n;
int GetMin(){
	int i=0,j=1,k=0;
	int len=strlen(s);
	while(i<len && j<len && k<len){
		int t=s[(i+k)%len] - s[(j+k)%len];
		if(t==0) k++;
		else if(t<0){
			j+=k+1;
			k=0;
		}
		else {
			i+=k+1;
			k=0;
		}
		if(i==j) ++j;
		
	}
	return i<j ? i:j;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	while(scanf("%d",&n)!=EOF){
		m.clear();
		
		for(int i=0;i<n;++i){
			scanf("%s",s);
			int t,c;
			char str[maxn];
			t=GetMin();
			c=strlen(s);
			for(int j=0;j<c;j++){
				str[j]=s[(t+j)%c];
			}
			str[c]='\0';
			m.insert(str);
		}
		printf("%d\n",m.size());
		
	}
	
	return 0;
}
