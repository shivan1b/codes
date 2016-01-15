/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

long merge_count(long * a, long l, long mid, long r){
     long p=l,q=mid,c=0,i=0,j=0,tmp[r-l+1];
     while(p<mid && q<=r){
          if(a[p]<=a[q])
               tmp[i++]=a[p++];
          else{
               tmp[i++]=a[q++];
               c+=mid-p;
          }
     }
     while(p<mid)
          tmp[i++]=a[p++];
     while(q<=r)
          tmp[i++]=a[q++];
     while(l<=r)
          a[l++]=tmp[j++];
     return c;
}
long merge_and_count(long * a, long l, long r){
     long mid,c=0;
     if(l<r){
          mid=(l+r)/2;
          c+=merge_and_count(a,l,mid);
          c+=merge_and_count(a,mid+1,r);
          c+=merge_count(a,l,mid+1,r);
     }
     return c;
}
int main()
{
     long n;
     while(cin>>n && n!=0){
          long a[n];
          for(int i=0;i<n;i++)
               cin>>a[i];
          long ans=merge_and_count(a,0,n-1);
          if(ans & 1)
               cout<<"Marcelo\n";
          else
               cout<<"Carlos\n";
     }
}
