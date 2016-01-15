/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
     int n,m,c,l=0;
     while(cin>>n>>m>>c && n||m||c){
          l++;
          int a[n+1],power=0,q,mx=0;
          bool p[n+1];
         memset(p,false,(n+1)*sizeof(bool));
          for(int i=1;i<=n;i++)
               cin>>a[i];
          for(int i=1;i<=m;i++){
               cin>>q;
               if(!p[q]){
                    power=power+a[q];
                    if(power>mx)
                         mx=power;
                    p[q]=true;
               }
               else{
                    power=power-a[q];
                    p[q]=false;
               }
          }
          if(mx<=c)
               cout<<"Sequence "<<l<<"\nFuse was not blown.\nMaximal power consumption was "<<mx<<" amperes.\n\n";
          else
               cout<<"Sequence "<<l<<"\nFuse was blown.\n\n";
     }
}
