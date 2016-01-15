/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<stdio.h>
#include<string.h>
using namespace std;

char pat[1000006],s[1000006];
void PreSuf(char * pat, int n, int * p){
     int l=0,i=1;
     p[0]=0;
     while(i<n){
          if(pat[i]==pat[l])
               l++,p[i]=l,i++;
          else{
               if(l!=0)
                    l=p[l-1];
               else
                    p[i]=0,i++;
          }
     }
}
void KnuthMorrisPrat(char * pat, int n, char * s){
     int m=strlen(s);
     int i=0,j=0;
     bool t=false;
     int p[n];
     PreSuf(pat,n,p);
     while(i<m){
          if(pat[j]==s[i])
               i++,j++;
          if(j==n){
               printf("%d\n",i-j);
               j=p[j-1];
               t=true;
          }
          else if(i<m && pat[j]!=s[i]){
               if(j!=0)
                    j=p[j-1];
               else
                    i++;
          }
     }
     if(!t)
          printf("\n");
}
int main()
{
     int n;
     while(scanf("%d",&n)==1){
          scanf("%s %s",pat,s);
          KnuthMorrisPrat(pat,n,s);
     }
}
