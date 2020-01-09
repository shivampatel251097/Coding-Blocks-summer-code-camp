#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
        int v;
        list<int> *adj;
        graph(int v){
            this->v=v;
            adj=new list<int>[v];
        }

        void add(int a,int b,bool bidir=true){
            adj[a].push_back(b);
            if(bidir)
            {
                adj[b].push_back(a);
            }
        }

        void print(){
            for(int i=0;i<v;i++){
                cout<<i<<"==";
                for(int el:adj[i])
                    cout<<el<<"-->"
            }
            cout<<"END\n";
        }

        void bfs(int source){
            queue<int> q;
            vector<int> vis(this->v);
            q.push(src);
            vis[src]=true; 
            while(!q.empty()){
                int n=q.front();
                cout<<n<<", ";
                q.pop();
                for(int el:this->adj[n])
                {
                    if(vis[el]==false){
                        q.push(el);
                        vis[el]=true;
                    }
                }
            }
        }

        void dfs(int source){
            stack<int> s;
            bool *vis=new bool[this->v]();
            s.push(source);
            vis[src]=true;
            while(!s.empty()){
                int n=s.top();
                cout<<n<<" ";
                s.pop();
                for(int el:this->adj[n]){
                    if(vis[el]==false){
                        s.push(el);
                        vis[el]=true;
                    }
                }
            }
        }

        void shortPathBfs(int source,int des){
            int *dist=new int[this->v]();
            int *par=new int[this->v];
            for(int i=0;i<this->v;i++)
                par[i]=-1;
            queue<int> q;
            vector<int> vis(this->v);
            q.push(src);
            vis[src]=true; 
            while(!q.empty()){
                int n=q.front();
                //cout<<n<<", ";
                q.pop();
                for(int el:this->adj[n])
                {
                    if(vis[el]==false){
                        q.push(el);
                        vis[el]=true;
                        par[el]=n;
                        dist[el]=dist[n]+1;
                    }
                }
            }

            int  temp=dest;
            while(temp!=-1){
                cout<<temp<<"<--";
                temp=par[temp];
            }
        }
};



int main() {
    list<int>  
}
