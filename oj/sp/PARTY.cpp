/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int main()
{
     int budget, party;
     while(cin>>budget>>party && budget!=0 && party!=0){
          int val[party+1],c[budget+1],wt[party+1];
          for(int i=1;i<=budget;i++)
               c[i]=-1;
          for(int i=1;i<=party;i++)
               cin>>val[i]>>wt[i];
          c[0]=0;
          for(int i=1;i<=party;i++)
               for(int w=budget;w>=0;w--)
                    if(c[w]!=-1)
                         if(w+val[i]<=budget)
                              if(c[w+val[i]]<c[w]+wt[i])
                                   c[w+val[i]]=c[w]+wt[i];
          int k=0,v=0;
          for(int i=budget;i>=0;i--)
               if(c[i]>=v)
                    k=i,v=c[i];
     cout<<k<<" "<<v<<"\n";
     }
}
