#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
const int maxn=1e7+10;
char a;
int str1,str2,strr1,strr2,f[maxn][3],cnt;
int main(){
	while(cin>>a && a!='E'){
		if(a=='W'){
			str1++;
			strr1++;
		}
		if(a=='L'){
			str2++;
			strr2++;
		}
		if((str1-str2>=2 && str1>=11) || (str2-str1>=2 && str2>=11)){
			printf("%d:%d\n",str1,str2);
			str1=0,str2=0;
		}
		if((strr1-strr2>=2 && strr1>=21) || (strr2-strr1>=2 && strr2>=21)){
			f[cnt][0]=strr1,f[cnt][1]=strr2;
			cnt++;
			strr1=strr2=0;
		}
	}
	printf("%d:%d\n",str1,str2);
	printf("\n");
	for(int i=0;i<cnt;i++){
		printf("%d:%d\n",f[i][0],f[i][1]);
	}
	printf("%d:%d",strr1,strr2);
	return 0;
}
