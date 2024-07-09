#include<bits/stdc++.h>
using namespace std;
class BFS{
    public:
	vector<int> bfsgraph(int N,vector<int> adj[]){
		//create a memory for those nodes visited 
		vector<int> visited(N,0);
		//take a list to nodes after bfs
		vector<int> bfs;
		//create a queue
		queue<int> q;
		//push node '0' into queue and make visited of node '0' as 1
		visited[0]=1;
		q.push(0);
		while(!q.empty()){
			//take first node into a var to check whether neighbouring nodes exist
			int node=q.front();
			//pop it from queue
			q.pop();
			//push it into bfs list
			bfs.push_back(node);
			//check for adjacency nodes
			for(auto it:adj[node]){
				//if exists and still not visited make it as 1 and push it into queue
				if(!visited[it]){
					visited[it]=1;
					q.push(it);
				}
			}
		}
		return bfs;
	}
};
void addEdge(vector<int> adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void printAns(const vector<int>& ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
int main(){
	int N=5;
	vector<int> adj[N];
	
	addEdge(adj,0,1);
	addEdge(adj,1,2);
	addEdge(adj,1,3);
	addEdge(adj,0,4);
	
	BFS b;
	vector<int> ans=b.bfsgraph(N,adj);
	printAns(ans);
}
