#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
const double esp = 1e-10;
const double pi = acos(-1.0);
const int maxn=5e4;

struct Point {
	double x,y;
	Point(){}
	Point(double x,double y):x(x),y(y){}
};
Point operator + (Point a,Point b){
	return Point(a.x+b.x,a.y+b.y);
}
Point operator - (Point a,Point b){
	return Point(a.x-b.x,a.y-b.y);
}
Point operator * (Point a,double k){
	return Point(a.x*k,a.y*k);
}
Point operator / (Point a,double k){
	return Point(a.x/k,a.y/k);
}
int sgn(double x){
	if(fabs(x)<esp) return 0;
	else return x<0 ? -1:1;
}
struct Line{
	Point p1,p2;
	Line(){}
	Line(Point p1,Point p2):p1(p1),p2(p2){}
	Line(Point p,double angle){
		p1=p;
		if(sgn(angle-pi/2)==0){
			p2=(p1+Point(0,1));
		}
		else {
			p2=(p1+Point(1,tan(angle))); 
		}
	} 
	Line(double a,double b,double c){
		if(sgn(a)==0){
			p1=Point(0,-c/b);
			p2=Point(1,-c/b);
		}
		else if(sgn(b)==0){
			p1=Point(-c/a,0);
			p2=Point(-c/a,1);
		}
		else{
			p1=Point(0,-c/b);
			p2=Point(1,(-c-a)/b);
		}
	}
}line[maxn];
typedef Point Vector;
double Cross(Vector a,Vector b){
	return a.x*b.y - a.y*b.x;
}

int n,m,x,y,x2,y2;
int ans[maxn];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	while(cin>>n){
		if(n==0) break;
		cin>>m;
		cin>>x>>y>>x2>>y2;
		memset(ans,0,sizeof(ans));
		for(int i=0;i<n;i++){
			int u,l;
			cin>>u>>l;
			line[i]=Line(Point(u,y),Point(l,y2));
		}
		line[n]=Line(Point(x2,y),Point(x2,y2));
		for(int i=0;i<m;i++){
			int lox,loy;
			Point tmp;
			cin>>lox>>loy;
			tmp=Point(lox,loy);
			int left,right,mid;
			left=0,right=n;
			while(left<=right){
				mid=(left+right)/2;
				if(Cross(tmp-line[mid].p1,line[mid].p2-line[mid].p1)>=0) right=mid-1;
				else  left=mid+1;
			}
			ans[left]++;
		}
		for(int i=0;i<=n;i++){
			printf("%d: %d\n",i,ans[i]);
		}
		printf("\n");
	}
	
	return 0;
} 
