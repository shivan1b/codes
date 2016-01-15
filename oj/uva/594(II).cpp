/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<bitset>
using namespace std;

int main()
{
     int32_t num;
     while(cin>>num){
          bitset<32> b(num);
          int p=4;
          int32_t res=0;
          for(int i=0;i<32;i++){
               if(i%8==0 && p>0) p--;
               if(b[i])
                    res|=1<<(p*8 + i%8);
          }
          cout<<num<<" converts to "<<res<<"\n";
     }
}
