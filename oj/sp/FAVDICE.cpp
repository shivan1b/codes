/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<cstdio>
using namespace std;

int main()
{
     int t,n;
     double ans,aux;
     scanf("%d",&t);
     while(t--){
          scanf("%d",&n);
          ans=0;
          aux=n;
          while(n-- > 1)
               ans=ans+(double)aux/n;
          printf("%.2lf\n",ans);
     }
}
