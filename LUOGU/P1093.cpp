#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
struct student{
	int num,china,math,english;
	int sum;
}stu[10000];
bool cmp(student a,student b){
	if(a.sum!=b.sum) return a.sum>b.sum;
	else if(a.china!=b.china) return a.china>b.china;
	else return a.num<b.num;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		stu[i].num=i;
		cin>>stu[i].china>>stu[i].math>>stu[i].english;
		stu[i].sum=stu[i].china+stu[i].english+stu[i].math;
	}
		sort(stu+1,stu+n+1,cmp);
		for(int i=1;i<=5;i++){
			cout<<stu[i].num<<" "<<stu[i].sum<<endl; 
		}
	return 0;
}
