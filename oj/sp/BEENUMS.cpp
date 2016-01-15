/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

bool IsValidBeehive(int64_t c,int i)
{
     if(c==1)
          return true;
     else if(c>0)
          return IsValidBeehive(c-6*i,i+1);
     return false;
}

int main()
{
     int64_t N;
     bool r;
     while(cin>>N && N!=-1)
     {
          r=IsValidBeehive(N,1);
          if(r) cout<<"Y\n";
          else cout<<"N\n";
     }
}
