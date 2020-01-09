#include<bits/stdc++.h>
using namespace std;
int prims(){
	int totalweight=0;
	priority_queue<pair<int,int>,vector<pair<int,int>,greater<>> pq;
	pq.push(make_pair(0,0));
	unordered_map<int,bool> visited;
	while(!pq.empty()){
		int curr_vertex=pq.top().second;
		if(visited.find(curr_vertex)!=visited.end()){
			pq.pop();
			continue;
		}
		visited[curr_vertex]=true;
		totalweight=pq.top().first;
		pq.pop();
		for(auto neighbour:adj[curr_vertex]){
			pq.push(make_pair(neighbour.first,neighbour.second));
		}
	}
	return totalweight;
}
int main()
{
	Graph g(7);
	g.addEdge(0,1,2);
	g.addEdge(0,2,4);
	g.addEdge(1,3,1);
	g.addEdge(2,3,2);
	g.addEdge(2,4,1);
	g.addEdge(5,5,6);
	g.addEdge(4,6,4);
	g.printAdj();
	cout<<g.prims();
	return 0;
}