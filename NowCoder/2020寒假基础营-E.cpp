#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>//Å£¿Íº®¼Ù¼¯Ñµ1 EÌâ 
using namespace std;
typedef long long ll;
ll n,rel;
ll find(ll x){
	ll i,cnt=0;
	for(i=1;i<sqrt(x);i++){
		if(x%i==0) cnt+=2;
	}
	if(i==sqrt(x)) cnt+=1;
	return cnt;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	cin>>n;
	while(n!=2){
		n=find(n);
		rel++;
	}
	cout<<rel<<endl;

	return 0;
}
