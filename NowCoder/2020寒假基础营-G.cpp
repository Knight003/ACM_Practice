#include<cstdio>
#include<iostream> //牛客寒假基础营 G题 
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=2e5+10;
int n,k,rel;
int head,tail;
int num[maxn],s[maxn];
string str;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>k;
	cin>>str;
	head=1,tail=0,rel=maxn;
	for(int i=0;i<n;i++){
		s[++tail] = str[i] - 'a' ;
		num[s[tail]]++;
		if(num[s[tail]]==k){
			while(head<=tail){
				if(s[head]==s[tail]){
					rel = min(rel,tail-head+1);
					num[s[tail]]--;
					head++;
					break;	
				}
				else {
					num[s[head]]--;
					head++;
				}
			}
		}
		
	}
	if(rel==maxn) cout<<-1<<endl;
	else cout<<rel<<endl;
	
	return 0;
} 
