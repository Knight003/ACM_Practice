#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
	int a[100],n;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cin>>n;
	int count=0;
	for(int i=0;i<10;i++){
		if(n>=a[i]){
			count++;
		}
		else if(n+30>=a[i]){
			count++;
		}
	}
	cout<<count;	
	return 0;
}
