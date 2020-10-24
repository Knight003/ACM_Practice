#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct student{
	string name;
	int score1,score2,num;
	char a,b;
	int sum=0;
	int i;
}stu[200];
bool cmp(student a,student b){
	if(a.sum!=b.sum) return a.sum>b.sum;
	else return a.i<b.i;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		stu[i].i=i;
		cin>>stu[i].name;
		cin>>stu[i].score1>>stu[i].score2;
		cin>>stu[i].a>>stu[i].b;
		cin>>stu[i].num;
	}
	for(int i=0;i<n;i++){
		if(stu[i].score1>80&&stu[i].num>=1) stu[i].sum+=8000;
		if(stu[i].score1>85&&stu[i].score2>80) stu[i].sum+=4000;
		if(stu[i].score1>90) stu[i].sum+=2000;
		if(stu[i].score1>85&&stu[i].b=='Y') stu[i].sum+=1000;
		if(stu[i].score2>80&&stu[i].a=='Y') stu[i].sum+=850;
	}
	sort(stu,stu+n,cmp);
	long long int k=0;
	for(int i=0;i<n;i++){
		k+=stu[i].sum;
	}
	cout<<stu[0].name<<endl<<stu[0].sum<<endl;
	cout<<k<<endl;
	return 0;
}
