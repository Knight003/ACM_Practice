#include<cstdio> 
#include<iostream>
#include<cmath>
using namespace std;//Å£¿Í2020º®¼Ù¼¯Ñµ1 BÌâ 
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
