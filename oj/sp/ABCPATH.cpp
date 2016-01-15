/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<queue>
using namespace std;
char a[50][50];
int ab[9]={0,0,0,1,1,1,-1,-1,-1};
int ord[9]={0,1,-1,0,1,-1,0,1,-1};
struct Grid{
     int x,y,dist;
}gr;
queue<Grid> q;
int main()
{
     ios_base::sync_with_stdio(false);
     int h,w;
     int t=0;
     while(cin>>h>>w && h!=0 && w!=0){
          t++;
          int ans=0;
          for(int i=0;i<h;i++)
               for(int j=0;j<w;j++)
                    cin>>a[i][j];
          int visited[50][50]={0};
          for(int i=0;i<h;i++)
               for(int j=0;j<w;j++){
                    if(a[i][j]=='A'){
                         gr.x=i;
                         gr.y=j;
                         gr.dist=1;
                         q.push(gr);
                         visited[i][j]++;
                         while(!q.empty()){
                              int m=q.front().x;
                              int n=q.front().y;
                              int d=q.front().dist;
                              ans=max(ans,d);
                              for(int c=1;c<=8;c++){
                                   if(m+ab[c]<h && m+ab[c]>=0 && n+ord[c]<w && n+ord[c]>=0 && a[m+ab[c]][n+ord[c]]==a[m][n]+1 && visited[m+ab[c]][n+ord[c]]){
                                        gr.x=m+ab[c];
                                        gr.y=n+ord[c];
                                        gr.dist=q.front().dist+1;
                                        q.push(gr);
                                        visited[m+ab[c]][n+ord[c]]++;
                                   }
                              }
                              q.pop();
                         }
                    }
          }
          cout<<"Case "<<t<<": "<<ans<<"\n";
     }
}
