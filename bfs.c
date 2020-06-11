#include<stdio.h>
#include<stdlib.h>

int adj[20][20],visited[20],n;
int queue[20],front=-1,rear=-1;

void enqueue(int ele){
	if(front==-1)
		front++;
	rear++;
	queue[rear]=ele;
}
int dequeue(){
	int ele=queue[front];
	if(front==rear)
		front=rear=-1;
	else
		front++;
	return ele;
}
void createGraph(){
	int ch,a,b;
	printf("Enter the vertices: ");
	scanf("%d",&n);
	do{
		printf("Enter the edges: ");
		scanf("%d%d",&a,&b);
		adj[a][b]=1;
		
		scanf("%d",&ch);
	}while(ch==1);
}
void display(){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			printf("%d ",adj[i][j]);
		printf("\n");
	}
}
void bfs(int v){
	int i;
	printf("%d ",v);
	visited[v]=1;
	enqueue(v);
	while(front!=-1){
		int k=dequeue();
		for(i=0;i<n;i++){
			if(adj[k][i]==1 && visited[i]==0){
				printf("%d ",i);
				visited[i]=1;
				enqueue(i);
			}
		}
	}
}
main(){
	createGraph();
	int i;
	printf("BFS is:\n");
	for(i=0;i<n;i++){
		if(visited[i]==0)
			bfs(i);	
	}
}

