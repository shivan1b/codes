/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

struct City{
     int x,y,trap;
}cat;

queue<City> c;

bool Bounds(int i, int j, int n, int m){
     if(i<n && j<m && i>=0 && j>=0)
          return true;
     return false;
}

int main()
{
     ios_base::sync_with_stdio(false);
     int n,m;
     string s;
     cin>>n>>m;
     char news[n][m];
     for(int i=0;i<n;i++){
          cin>>s;
          for(int j=0;j<m;j++)
               news[i][j]=s[j];
     }
     bool visited[n][m];
     memset(visited,false,n*m*sizeof(bool));
     int l=0;
     for(int i=0;i<n;i++)
          for(int j=0;j<m;j++){
             //  cout<<"i="<<i<<" j="<<j<<"\n";
               if(!visited[i][j]){
                    l++;
                    cat.x=i;
                    cat.y=j;
                    c.push(cat);
                    visited[i][j]=true;
                    //cout<<"visited "<<news[i][j]<<"\n";
                    while(!c.empty()){
                         cat=c.front();
                         int p=cat.x;
                         int q=cat.y;
                         if(Bounds(p,q-1,n,m) && !visited[p][q-1] && news[p][q-1]=='E'){
                              cat.x=p;
                              cat.y=q-1;
                              c.push(cat);
                              visited[p][q-1]=true;
                              //cout<<"visited "<<news[p][q-1]<<"\n";
                         }
                          if(Bounds(p,q+1,n,m) && !visited[p][q+1] && news[p][q+1]=='W'){
                              cat.x=p;
                              cat.y=q+1;
                              c.push(cat);
                              visited[p][q+1]=true;
                              //cout<<"visited "<<news[p][q+1]<<"\n";
                         }
                          if(Bounds(p-1,q,n,m) && !visited[p-1][q] && news[p-1][q]=='S'){
                              cat.x=p-1;
                              cat.y=q;
                              c.push(cat);
                              visited[p-1][q]=true;
                             // cout<<"visited "<<news[p-1][q]<<"\n";
                         }
                          if(Bounds(p+1,q,n,m) && !visited[p+1][q] && news[p+1][q]=='N'){
                              cat.x=p+1;
                              cat.y=q;
                              c.push(cat);
                              visited[p+1][q]=true;
                              //cout<<"visited "<<news[p+1][q]<<"\n";
                         }
                         switch(news[p][q]){
                         case 'S':
                              p++;
                              break;
                         case 'N':
                              p--;
                              break;
                         case 'E':
                              q++;
                              break;
                         case 'W':
                              q--;
                              break;
                         }
                         if(Bounds(p,q,n,m) && !visited[p][q]){
                              cat.x=p;
                              cat.y=q;
                              c.push(cat);
                              visited[p][q]=true;
                              //cout<<"visited "<<news[p][q]<<"\n";
                         }
                          c.pop();
                    }
               }
          }
     cout<<l<<"\n";
}
