#include<stdio.h>
int main(){
	int n=4,min=999,a,b;
	int i,j,ne=1,mincost=0,c[n][n];
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&c[i][j]);
			if(c[i][j]==0)
				c[i][j]=999;
		}
	}
	int visit[4]={0};
	visit[1]=1;
	while(ne<n){
		min=999;
		for(i=1;i<=n;i++){
			printf("ne: i:  %d ",i);
			for(j=1;j<=n;j++){
				if(min>c[i][j] && visit[i]!=0){
					min=c[i][j];
					a=i;
					b=j;
				}
			}
				if(visit[b]==0){
					printf("\nin edge:%d:(%d %d)cost %d",ne++,a,b,min);
					mincost+=min;
					visit[b]=1;
					c[a][b]=c[b][a]=999;
				}
				
			printf("\nmincost:%d",mincost);
		}
	}
	for(i=1;i<=n;i++){
		printf("\n");
		for(j=1;j<=n;j++){
			printf("%d ",c[i][j]);
		}
	}
}
