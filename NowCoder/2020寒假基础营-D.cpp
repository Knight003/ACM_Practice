#include<cstdio>  //Å£¿Í2020º®¼Ù¼¯Ñµ1 DÌâ 
#include<iostream>
#include<cstring>
using namespace std;
const int maxn = 1e5+10;
int n;
int a[maxn],b[maxn];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	memset(b,0,sizeof(b));
	for(int i=1;i<=n-1;i++) {
		cin>>a[i];
		b[a[i]]=1;
	}
	for(int i=1;i<=n;i++){
		if(b[i]==0){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
