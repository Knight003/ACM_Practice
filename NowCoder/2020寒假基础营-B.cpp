#include<cstdio> 
#include<iostream>
#include<cmath>
using namespace std;//ţ��2020���ټ�ѵ1 B�� 
typedef long long ll;
const ll mod = 1e9+7;
double n,x,a,b;
double sum;
int main() {
	cin>>n>>x>>a>>b;
	x/=100;
	sum = n*a*x + n*b*(1-x);
	printf("%.2lf",sum);
	return 0;
}
