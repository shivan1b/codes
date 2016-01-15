/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     int n;
     while(cin>>n){
          int m[n+1][n+1],p[n+1],c[n+1][n+1];
          for(int i=1;i<=n;i++)
               cin>>p[i],c[i][i]=p[i];
          for(int i=1;i<=n;i++){
               m[i][i]=0;
               for(int j=i+1;j<=n;j++)
                    c[i][j]=(c[i][j-1]+p[j])%100;
          }
          for(int l=2;l<=n;l++)
               for(int i=1;i<=n-l+1;i++){
                    int j=i+l-1;
                    m[i][j]=INT_MAX;
                    for(int k=i;k<=j-1;k++)
                         m[i][j]=min(m[i][j],m[i][k]+m[k+1][j]+c[i][k]*c[k+1][j]);
               }
          cout<<m[1][n]<<"\n";
     }
}
