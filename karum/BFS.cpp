#include<iostream>
#include<cstring>
#include<list>
#include<queue>

using namespace std;

class graph{
	public:
		int v;
		list<int> *adj;

		graph(int v){
			v=v;
			adj=new list<int>[v];
		}

		void addEdge(int u, int v){
			adj[u].push_back(v);
		}

		void BFS(int s){
			bool *vis = new bool[v];
			memset(vis,false,sizeof(bool)*v);
			
			queue<int> q;
			q.push(s);
			vis[s]=true;

			while(!q.empty()){
				int p=q.front();
				cout<<p<<"\n";
				q.pop();

				list<int>::iterator it;
				for(it=adj[p].begin();it!=adj[p].end();it++){
					if(!vis[*it]) {
						q.push(*it);
						vis[*it]=true;
					}
				}
			}
		}
};

int main()
{
	int n,e,s,u,v;

	cout<<"Enter the number of vertices you want in your graph:";
	cin>>n;
	graph g(n);

	cout<<"\nEnter the number of edged you want in your graph:";
	cin>>e;
	while(e--){
		cout<<"\nStarting and ending node of the edge:";
		cin>>u>>v;
		g.addEdge(u,v);
	}
	
	cout<<"\nEnter the source node for BFS:";
	cin>>s;
	cout<<"\nBFS gives:\n";
	g.BFS(s);
}
