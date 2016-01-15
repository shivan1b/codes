/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<deque>
using namespace std;

void SlidingWindow(long * a, long n, long k){
     deque<long> dq(k);
     for(int i=0;i<k;i++){
          while(!dq.empty() && a[i]>=a[dq.back()])
               dq.pop_back();
          dq.push_back(i);
     }
     for(int i=k;i<n;i++){
          cout<<a[dq.front()]<<" ";
          while(!dq.empty() && dq.front()<=i-k)
               dq.pop_front();
          while(!dq.empty() && a[i]>=a[dq.back()])
               dq.pop_back();
          dq.push_back(i);
     }
     cout<<a[dq.front()]<<"\n";
}
int main()
{
     ios_base::sync_with_stdio(false);
     long n,k;
     cin>>n;
     long a[n];
     for(int i=0;i<n;i++)
          cin>>a[i];
     cin>>k;
     SlidingWindow(a,n,k);
}
