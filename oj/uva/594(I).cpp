/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 * (This marvelous idea of using union is borrowed)
 */

#include<iostream>
using namespace std;

union bits{
     int val;
     char c[4];
}in,out;
int main()
{
     int32_t num;
     while(cin>>num){
          in.val=num;
          int j=3;
          for(int i=0;i<4 && j>=0 ;)
               out.c[i++]=in.c[j--];
          cout<<in.val<<" converts to "<<out.val<<"\n";
     }
}
