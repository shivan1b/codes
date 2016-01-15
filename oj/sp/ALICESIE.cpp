/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<stdio.h>
#include<cmath>

int main()
{
     int t;
     long n;
     scanf("%d",&t);
     while(t--){
          scanf("%ld",&n);
          long ans=ceil(n/2.0);
          printf("%ld\n",ans);
     }
}
