/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     int A,D;
     while(cin>>A>>D && A!=0 && D!=0)
     {
          int B[A],C[D];
          for(int i=0;i<A;i++) cin>>B[i];
          for(int i=0;i<D;i++) cin>>C[i];
          sort(B,B+A);
          sort(C,C+D);
          if(C[0]<=B[0] && C[1]<=B[0])
               cout<<"N\n";
          else cout<<"Y\n";
     }
}
