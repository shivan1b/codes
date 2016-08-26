#include<iostream>
#include<list>
#include<stack>
#include<cstring>

using namespace std;

class Graph{
	public:
		int v;
		list<int> *adj;

		Graph(int v){
			v=v;
			adj=new list<int>[v];
		}

		void addEdge(int u, int v){
			adj[u].push_back(v);
		}

		void DFSFun(int p, bool vis[]){
			vis[p]=true;
			cout<<p<<"\n";

			list<int>::iterator it;
			for(it=adj[p].begin();it!=adj[p].end();it++){
				if(!vis[*it])
					DFSFun(*it, vis);		
			}
		}

		void DFS(int so){
			bool *vis=new bool[v];
			memset(vis, false, sizeof(bool)*v);

			DFSFun(so,vis);
		}
};

int main()
{
	int n,e,s,u,v;

        cout<<"Enter the number of vertices you want in your graph:";
        cin>>n;
        Graph g(n);

        cout<<"\nEnter the number of edged you want in your graph:";
        cin>>e;
        while(e--){
                cout<<"\nStarting and ending node of the edge:";
                cin>>u>>v;
                g.addEdge(u,v);
        }

        cout<<"\nEnter the source node for BFS:";
        cin>>s;
        cout<<"\nDFS gives:\n";
        g.DFS(s);
}
