/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
     long i,j,l_limit,u_limit;
     while(scanf("%ld %ld", &i,&j)>0){
          l_limit=min(i,j);
          u_limit=max(i,j);
          long cnt=0;
          for(long p=u_limit;p>=l_limit;p--){
               long n=p,c=0;
               while(n!=1){
               if((n&1)==1)
                    n=3*n+1;
               else
                    n=n/2;
               c++;
               }
               cnt=max(cnt,c);
          }
          printf("%ld %ld %ld\n",i,j,cnt+1);
     }
}
