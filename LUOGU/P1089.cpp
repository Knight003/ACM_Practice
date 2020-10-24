#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
	int a[20],b[20]={0},money=0,c[20];
	for(int i=1;i<=12;i++){
		scanf("%d",&a[i]);
	}
	int num=0,count=0;
	for(int i=1;i<=12;i++){
		money+=300;
		money-=a[i];
		if(money<0){
			b[num]=i;
			num++;
		}
		if(money/100>0){
			c[count]=(money/100)*100;
			money-=c[count];
			count++;
		}
	}
	for(int i=0;i<num;i++){
		if(b[i]!=0){
			printf("-%d",b[i]);
			return 0;
		} 
	}
	int sum=0;
	for(int i=0;i<count;i++){
		sum+=c[i];
	}
	sum=(double)sum*1.2;
	sum+=money;
	printf("%d",sum);
	
	
	return 0;
} 
