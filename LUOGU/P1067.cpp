#include <stdio.h> 
#include <string.h>
int main(){
	int a[1000],n;
	scanf("%d",&n);
	int k=n;
	for(int i=1;i<=n+1;i++){
		scanf("%d",&a[i]);
	}
	if(a[1]==1){
		if(k==0) printf("1");
		else if(k==1){
			printf("x");
			k--;
		} 
		else
		{printf("x^%d",k);k--;}
	}
	else if(a[1]==-1){
		if(k==0) printf("-1");
		else if(k==1){
			printf("-x");
			k--;
		}
		else
		{printf("-x^%d",k);k--;} 
	}
	else if(a[1]!=0){
		if(k==0){
			printf("%d",a[1]);
		}
		else if(k==1){
			printf("%dx",a[1]);
			k--;
		}
		else{
			printf("%dx^%d",a[1],n);
			k--;
		}
	} 
	
	for(int j=2;j<=n;j++){
		if(a[j]>0){
			if(a[j]!=1){
				if(k==1){
				printf("%+dx",a[j]);
				k--;
				}
				else{
					printf("%+dx^%d",a[j],k);
					k--;
				}
			}
			else{
				if(k!=1){
				printf("+x^%d",k);
				k--;
				}
				else{
					printf("+x");
					k--;
				}
			}
		}
		else if(a[j]<0){
			if(a[j]!=-1){
				if(k!=1){
				printf("%dx^%d",a[j],k);
				k--;
				}
				else{
					printf("%dx",a[j]);
					k--;
				}
			}
			else{
				if(k!=1){
				printf("-x^%d",k);
				k--;
				}
				else{
					printf("-x");
					k--;
				}
			}
		}
		else{
			k--;
		}
	}
	if(n!=0){
	if(a[n+1]>0){
		printf("%+d",a[n+1]);
	}
	else if(a[n+1]<0){
		printf("%d",a[n+1]);
	}
	}
	
	return 0;
} 
