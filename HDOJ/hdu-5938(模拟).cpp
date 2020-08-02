#include<cstdio>
#include<iostream>
#include<cstring> //hdu-5938
#include<algorithm>
using namespace std;
typedef long long ll;
char s[100]; 
int t,a[100];
ll GetNum(int l,int r){
	ll ans=0;
	for(int i=l;i<=r;i++){
		ans=(ans*10+a[i]);
	}
	return ans;
}
int main() {
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		ll len,rel;
		scanf("%s",s);
		len = strlen(s);
		for(int j=0;j<len;j++){
			a[j] = s[j]-'0';
		} 
		rel = GetNum(0,len-5)+a[len-4]-a[len-3]*a[len-2]/a[len-1];
		rel = max(rel,a[0]+GetNum(1,len-4)-a[len-3]*a[len-2]/a[len-1]);
		if(len>5){
			int div = GetNum(len-2,len-1);
			rel = max(rel,GetNum(0,len-6)+a[len-5]-a[len-4]*a[len-3]/div);
			rel = max(rel,a[0]+GetNum(1,len-5)-a[len-4]*a[len-3]/div);
		}
		printf("Case #%d: %lld\n",i,rel);
	}
	
	return 0;
}
