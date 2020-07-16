#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=1e5+10;
typedef long long ll;
int n;
int c[maxn],ans[maxn];
struct Node{
	int l,r;
	int id;
}node[maxn]; 
bool cmp(Node a,Node b){
	if(a.r!=b.r) return a.r>b.r;
	else return a.l<b.l;
}
int lowbit(int x){
	return x&(-x);
}
void update(int x,int v){
	for(int i=x;i<=maxn;i+=lowbit(i)){
		c[i]+=v;
	}
}
ll getSum(int x){
	ll sum=0;
	for(int i=x;i>0;i-=lowbit(i)){
		sum+=c[i];
	}
	return sum;
}
int main() {
	while(scanf("%d",&n)!=EOF){
		if(n==0) break;
		memset(c,0,sizeof(c));
		for(int i=1;i<=n;i++){
			scanf("%d%d",&node[i].l,&node[i].r);
			node[i].id=i;
		} 
		sort(node+1,node+1+n,cmp);
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(i!=1 && node[i-1].l==node[i].l && node[i-1].r==node[i].r) cnt++;
			else cnt=0;
			ans[node[i].id] = getSum(node[i].l+1) - cnt;
			update(node[i].l+1,1);
		}
		for(int i=1;i<=n-1;i++){
			printf("%d ",ans[i]);
		} 
		printf("%d\n",ans[n]);
	}
		
	return 0;
}
