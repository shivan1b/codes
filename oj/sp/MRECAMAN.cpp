/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<stdio.h>
#include<map>

int main()
{
     long k,m,p;
     std::map<long,bool> mp;
     std::map<long, long> val;
     mp[0]=true;
     val[0]=0;
     for(long i=1;i<=500000;i++){
          p=val[i-1]-i;
          if(!mp[p] && p>-1)
               val[i]=p;
          else
               val[i]=val[i-1]+i;
          mp[val[i]]=true;
     }
     while(scanf("%ld",&k)==1 && k!=-1){
          printf("%ld\n",val[k]);
     }
}
