/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<cstring>
#include<algorithm>
#include<stack>
using namespace std;

bool PushPop(int * a, int n){
     stack<int> s;
     int b[n],j=0;
     memcpy(b,a,n*sizeof(int));
     sort(b,b+n);
     for(int i=0;i<n;i++){
          s.push(b[i]);
          while(!s.empty() && s.top()==a[j]){
                    s.pop();
                    j++;
          }
     }
     if(s.empty())
          return true;
     return false;
}
int main()
{
     int n;
     while(cin>>n && n!=0){
          int a[n];
          while(cin>>a[0] && a[0]!=0){
               for(int i=1;i<n;i++)
                    cin>>a[i];
               if(PushPop(a,n))
                    cout<<"Yes\n";
               else
                    cout<<"No\n";
          }
          cout<<"\n";
     }
}
