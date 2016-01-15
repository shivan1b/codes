/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;
int K[2000][2000];
int MaxRevenue(int * A, int a, int b, int n)
{
     if(K[a][b]!=-1)
          return K[a][b];
     int p=b-a+1;
     p=n-p+1;
     if(a==b)
          return p*A[a];
     else
          K[a][b]=max(p*A[a]+MaxRevenue(A,a+1,b,n),p*A[b]+MaxRevenue(A,a,b-1,n));
     return K[a][b];
}
int main()
{
     int N;
     cin>>N;
     int A[N];
     for(int i=0;i<N;i++)
          cin>>A[i];
      for(int i=0;i<N;i++)
          for(int j=0;j<N;j++)
               K[i][j]=-1;
     cout<<MaxRevenue(A, 0, N-1, N)<<"\n";
}
