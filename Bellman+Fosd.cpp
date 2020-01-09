// Exaxtly 3 divisor up to 
#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
void Bellmanford(int src){
	int distance[v];
	for(int i=0;i<v;i++){
		if(i==src){
			distance[i]=0;
		}
		else{
			distance[i]=inf;
		}
	}
	for(int i=1;i<n=this->v-1;i++)
	{
		for(int j=0;j<this->e;j++){
			int src=edge[j].src;
			int dest=edge[j].dest;
			int wt=edge[j].weight;
			if(distance[src]!=inf and distance[src]+wt<distance[dest])
			{
				distance[dest]=distance[src]+wt;
			}
		}
	}

}
int main()
{
	
}