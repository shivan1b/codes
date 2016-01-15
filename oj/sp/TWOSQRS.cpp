/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<stdio.h>
#include<cmath>

bool isTwoSquares(long long n){
     long long i=sqrt(n),j=0;
     while(1){
          if(j*j>n)
               return false;
          else if(i*i + j*j <n)
               j++;
          else if(i*i + j*j == n)
               return true;
          else
               i--;
     }
}
int main()
{
     int c;
     scanf("%d",&c);
     while(c--){
          long long n;
          scanf("%lld",&n);
          bool ans=isTwoSquares(n);
          if(ans)
               printf("Yes\n");
          else
               printf("No\n");
     }
}
