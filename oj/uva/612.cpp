/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<algorithm>
using namespace std;

struct DNA{
     string s;
     int cnt=0;
};
bool compare(DNA x, DNA y){
     if(x.cnt<y.cnt) return true;
     return false;
}
int main()
{
     int t,l,n;
     string s;
     bool p=false;
     cin>>t;
     while(t--){
          cin.ignore();
          int c=0;
          cin>>l>>n;
          DNA d[n];
          for(int i=0;i<n;i++){
               cin>>s;
               d[i].s=s;
               for(int k=0;k<l;k++)
                   for(int j=k+1;j<l;j++)
                         if(s[k]>s[j])
                              d[i].cnt++;
          }
          sort(d,d+n,compare);
          if(p) cout<<"\n";
          p=true;
          for(int i=0;i<n;i++)
               cout<<d[i].s<<"\n";
     }
}
