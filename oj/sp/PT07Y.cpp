/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct Edge{
     int s,d;
};
struct Graph{
     int v,e;
     struct Edge* edge;
};
struct Graph* create(int v, int e){
     struct Graph* graph=(struct Graph*)malloc(sizeof (struct Graph));
     graph->v=v;
     graph->e=e;
     graph->edge=(struct Edge*)malloc(sizeof (struct Edge)*e);
     return graph;
};
int Find(int p[],int i)
{
     if (p[i] == -1)
        return i;
    return Find(p, p[i]);
}
void Union(int p[],int i, int j)
{
     p[j]=i;
}
bool CheckCycle(struct Graph* graph)
{
     int *p=(int*)malloc(graph->v* sizeof (int));
     memset(p,-1,graph->v * sizeof (int));
      /*for(int i=0;i<graph->v;i++)
          cout<<"p"<<i<<"="<<p[i];
      cout<<"\n";*/
     for(int i=0;i<graph->e;i++)
     {
          /*cout<<"edge"<<i<<" src="<<graph->edge[i].s<<"\n";
          cout<<"edge"<<i<<" dest="<<graph->edge[i].d<<"\n";*/
          int x=Find(p,graph->edge[i].s);
          int y=Find(p,graph->edge[i].d);
          /*cout<<"x="<<x<<" "<<"y="<<y<<"\n";*/
          if(x==y)
               return true;
          Union(p,x,y);
     }
     return false;
}
int main()
{
     ios_base::sync_with_stdio(false);
     int N,M,v1,v2;
     cin>>N>>M;
     if(M!=(N-1))
          cout<<"NO\n";
     else{
          struct Graph* graph=create(N,M);
          for(int i=0;i<M;i++)
          {
               cin>>v1;
               graph->edge[i].s=v1-1;
               cin>>v2;
               graph->edge[i].d=v2-1;
          }
          if(CheckCycle(graph))
               cout<<"NO\n";
          else
               cout<<"YES\n";
     }
}
