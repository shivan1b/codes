/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int main()
{
     int t,n,p,w;
     cin>>t;
     while(t--){
          cin>>p>>w>>n;
          int a[n+1],wt[n+1];
          w=w-p;
          int c[w+1];
          for(int i=1;i<=w;i++)
               c[i]=-1;
          c[0]=0;
          for(int i=1;i<=n;i++)
               cin>>a[i]>>wt[i];
          for(int i=1;i<=n;i++)
               for(int j=0;j<=w;j++)
                    if(c[j]!=-1 && j+wt[i]<=w)
                         if(c[j+wt[i]]>c[j]+a[i] || c[j+wt[i]]==-1)
                              c[j+wt[i]]=c[j]+a[i];
          if(c[w]==-1)
               cout<<"This is impossible.\n";
          else
               cout<<"The minimum amount of money in the piggy-bank is "<<c[w]<<".\n";
     }
}
