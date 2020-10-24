#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
	int a[10][10],b[10]={0};
	for(int i=1;i<=7;i++){
		cin>>a[i][1];
		cin>>a[i][2];
	}
	int count=0;
	for(int i=1;i<=7;i++){
		if(a[i][1]+a[i][2]>8){
			b[i]=a[i][1]+a[i][2];
			count++;
		}
	}
	int t=1;
	for(int i=1;i<=7;i++){
		if(b[i]>8){
		for(int j=0;j<i;j++){
			if(b[i]==b[j]) t=-1;
		}
		if(t==1) printf("%d ",i);
		t=1;
		}
		if(count==0){
			printf("0");
			break;
		}
	}
	
	return 0;
}
