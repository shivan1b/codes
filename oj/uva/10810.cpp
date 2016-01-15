/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

long long Merge(long long * a, long long l, long long mid, long long n){
     long long p=l,q=mid,i=0,c=0;
     long long tmp[n-l+1];
     while(p<mid && q<=n){
          if(a[p]<=a[q])
               tmp[i++]=a[p++];
          else{
               tmp[i++]=a[q++];
               c+=mid-p;
          }
     }
     while(p<mid)
          tmp[i++]=a[p++];
     while(q<=n)
          tmp[i++]=a[q++];
     long long j=0;
    while(l<=n)
          a[l++]=tmp[j++];
     return c;
}

long long MergeSort(long long * a, long long b, long long n){
     long long mid,c=0;
     if(b<n){
          mid=(b+n)/2;
          c+=MergeSort(a,b,mid);
          c+=MergeSort(a,mid+1,n);
          c+=Merge(a,b,mid+1,n);
     }
     return c;
}
int main()
{
     long long n;
     while(cin>>n && n!=0){
          long long a[n];
          for(int i=0;i<n;i++)
               cin>>a[i];
          cout<<MergeSort(a,0,n-1)<<"\n";
          //for(int i=0;i<n;i++)
             //  cout<<a[i]<<" ";
         // cout<<"\n";
     }
}
