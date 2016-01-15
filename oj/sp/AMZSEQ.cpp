/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<stdio.h>

int main()
{
     long long n;
     scanf("%lld",&n);
     long long a=3,b=7,ans;
     if(n==1)
          printf("3\n");
     else if(n==2)
          printf("7\n");
     else{
          for(long long i=2;i<n;i++){
               ans=2*b+a;
               a=b;
               b=ans;
          }
          printf("%lld\n",ans);
     }
}
