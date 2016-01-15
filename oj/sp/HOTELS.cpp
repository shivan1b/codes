/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<queue>
using namespace std;

int main()
{
     int64_t n,m,beg,en;
     priority_queue<int32_t> pq;
     cin>>n>>m;
     int32_t a[n];
     for(int i=0;i<n;i++)
          cin>>a[i];
     beg=0,en=0;
     int64_t sum=a[beg];
     pq.push(sum);
    for(int i=0;i<n;i++){
          if(sum==m || a[i]==m){
               pq.push(m);
               break;
          }
          if(a[i]>m){
               sum=0;
               continue;
          }
          while(sum<m && en<n-1){
               en++;
               sum=sum+a[en];
               if(sum<=m)
                    pq.push(sum);
          }
          while(sum>m && beg<n-1){
               sum=sum-a[beg];
               beg++;
               if(sum<=m)
                    pq.push(sum);
          }
    }
     cout<<pq.top()<<"\n";
}
