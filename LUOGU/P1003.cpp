#include <stdio.h> 
#include <string.h>
int cover[100005][5];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d%d",&cover[i][1],&cover[i][2],&cover[i][3],&cover[i][4]);
	}
	int x,y;
	scanf("%d%d",&x,&y);
	for(int j=n;j>=1;j--){
		if(x>=cover[j][1]&&x<=cover[j][1]+cover[j][3]&&y>=cover[j][2]&&y<=cover[j][4]+cover[j][2]){
		printf("%d",j);
		return 0;
		}
	} 
	printf("-1");
	return 0;
}
