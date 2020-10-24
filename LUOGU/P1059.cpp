
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int n,a[100010],b[100010];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	int num=1,count=0,i,j; 
	for(i=0;i<n;i++){
		for(j=0;j<num;j++){
			if(a[i]!=b[j])
			count++;
		}
		if(count==num){
			b[num]=a[i];
			num++;
			count=0;
		}
		else{
			count=0;
		}
	}
	sort(b,b+num);
	printf("%d\n",num);
	for(int i=0;i<num;i++){
		printf("%d ",b[i]);
	}
	return 0;
}
