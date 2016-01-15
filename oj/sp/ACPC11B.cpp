/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<algorithm>
using namespace std;

int64_t MergeSol(int64_t * A, int N, int64_t * B, int M)
{
     int i1=0,i2=0;
     int64_t mn=9999999;
     while(i1<N && i2<M){
          while(A[i1]>=B[i2] && i1<N){
               if(A[i1]-B[i2]<mn)
                    mn=A[i1]-B[i2];
               i1++;
          }
          while(A[i1]<B[i2] && i2<M){
               if(B[i2]-A[i1]<mn)
                    mn=B[i2]-A[i1];
               i2++;
          }
     }
     return mn;
}
int main()
{
     int T,N,M;
     cin>>T;
     while(T--){
          cin>>N;
          int64_t A[N];
          for(int i=0;i<N;i++)
               cin>>A[i];
          cin>>M;
          int64_t B[M];
          for(int i=0;i<M;i++)
               cin>>B[i];
          sort(A,A+N);
          sort(B,B+M);
          cout<<MergeSol(A,N,B,M)<<"\n";
     }
}
