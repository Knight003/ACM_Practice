#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
	int k;
	double n=0,sum=0;
	scanf("%d",&k);
	while(sum<=k){
		n++;
		sum+=1/n;
	}
	printf("%.0lf",n);
	return 0;
}
