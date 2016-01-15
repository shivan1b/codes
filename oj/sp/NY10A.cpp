/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
     int P,N;
     string s,t;
     cin>>P;
     while(P--)
     {
          int B[8];
          memset(B,0,sizeof B);
          cin>>N;
          cin.ignore();
          getline(cin,s);
          for(int i=0;i<s.length();i++)
          {
               t=s.substr(i,3);
               if(t=="TTT")
                    B[0]++;
                if(t=="TTH")
                    B[1]++;
               if(t=="THT")
                    B[2]++;
               if(t=="THH")
                    B[3]++;
               if(t=="HTT")
                    B[4]++;
               if(t=="HTH")
                    B[5]++;
               if(t=="HHT")
                    B[6]++;
               if(t=="HHH")
                    B[7]++;
               }
               cout<<N<<" ";
               for(int i=0;i<8;i++)
                    cout<<B[i]<<" ";
               cout<<"\n";
          }
}
