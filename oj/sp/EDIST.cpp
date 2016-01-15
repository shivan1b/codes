/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int EditDistance(string s1,string s2)
{
     int m=s1.length();
     int n=s2.length();
     int a[m+1],b[n+1];
     for(int i=0;i<=n;i++)
          b[i]=i;
     for(int i=0;i<=m;i++)
          a[i]=i;
     for(int i=1;i<=n;i++)
     {
          for(int j=1;j<=m;j++)
          {
               int c=a[j-1];
               a[j-1]=b[i];
               if(s1[j-1]==s2[i-1])
                    b[i]=c;
               else
                    b[i]=min(c,min(b[i],a[j]))+1;
          }
          a[m]=b[i];
     }
     return a[m];
}
int main()
{
     int T;
     string s1,s2;
     cin>>T;
     while(T--)
     {
          cin>>s1>>s2;
          cout<<EditDistance(s1,s2)<<"\n";
     }
}
