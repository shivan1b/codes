/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<cstdio>

int main()
{
     int t;
     long long a,b,c,p;
     scanf("%d",&t);
     while(t--){
          scanf("%lld %lld %lld",&a,&b,&c);
          printf("%lld\n",a*a-2*b);
     }
}
