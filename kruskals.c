#include<stdio.h>
int parent[4]={0};
int find(int t){
	while(parent[t]){
		t=parent[t];
	}
	return t;
}
int uni(int s,int d){
	if(d!=s){
		parent[d]=s;
		return 1;
	}
	return 0;
}
int main(){
	int n=4;
	int c[n][n],i,j,ne=1,mincost=0,min,u,v,a,b;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&c[i][j]);
			if(c[i][j]==0){
				c[i][j]=999;
			}
		}
	}
	while(ne<n){
		min=999;
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(c[i][j]<min){
					min=c[i][j];
					a=i;
					b=j;
				}	
			}
			u=find(a);
			v=find(b);
			if(uni(u,v)){
				printf("%dedge(%d %d)=%d\n",ne++,a,b,min);
				mincost+=min;
			}
			c[a][b]=c[b][a]=999;
		}
	}
	printf("mincost: %d",mincost);
	
}
