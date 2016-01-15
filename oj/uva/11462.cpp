/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
     long n;
     while(scanf("%ld",&n)==1 && n!=0){
          int c[101],b[n+1],a[n+1];
          for(int i=0;i<n;i++)
               scanf("%d",&a[i]);
          memset(c,0,sizeof(int)*101);
          for(int i=0;i<n;i++)
               c[a[i]]++;
          int p=*max_element(a,a+n);
          for(int i=1;i<=p;i++)
               c[i]+=c[i-1];
          for(int i=n-1;i>=0;i--)
               b[c[a[i]]-- - 1]=a[i];
          for(int i=0;i<n-1;i++)
               printf("%d ",b[i]);
          printf("%d\n",b[n-1]);
     }
}
