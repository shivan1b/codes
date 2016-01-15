/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
     int T,N,K;
     cin>>T;
     while(T--){
          cin>>N>>K;
          int64_t height[N];
          for(int i=0;i<N;i++)
               cin>>height[i];
          sort(height,height+N);
          int tmp=height[K-1]-height[0];
          if(K==1)
               cout<<tmp<<"\n";
          else{
               for(int i=0;i<N-K;i++){
                    int _tmp=height[i+K]-height[i+1];
                    if(_tmp<tmp)
                         tmp=_tmp;
               }
               cout<<tmp<<"\n";
          }
     }
}
