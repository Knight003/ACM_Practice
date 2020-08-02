#include<cstdio>
#include<iostream>
#include<cstring>//hdu-1251
using namespace std;
const int maxn = 1e6+10;
char s[maxn];
int trie[maxn][30];
int book[maxn],cnt[maxn];
int tot=1;
int ans;
void init(){
	tot=1;
	memset(trie,0,sizeof(0));
	memset(book,0,sizeof(0));
} 
void Insert(char *s){
	int len=strlen(s);
	int u=1;
	for(int i=0;i<len;i++){
		int c=s[i]-'a';
		if(trie[u][c]==0){
			trie[u][c]=++tot;
		}
		u=trie[u][c];
		cnt[u]++;
	}
	book[u]=true;
}
int FindPre(char *s){
	int len=strlen(s);
	int u=1;
	for(int i=0;i<len;i++){
		int c=s[i]-'a';
		if(!trie[u][c]) return 0;
		u=trie[u][c];
	}
	return cnt[u];
}
int main() {
	init(); 
	while(gets(s)){
		if(s[0]=='\0') break;
		Insert(s);
	}
	while(gets(s)){
		ans=0;
		int rel;
		rel = FindPre(s);
		printf("%d\n",rel);
	}
	
	return 0;
}
