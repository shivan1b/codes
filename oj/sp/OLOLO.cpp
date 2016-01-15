/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     int32_t N;
     int64_t Pi,r=0;
     cin>>N;
     while(N--)
     {
          cin>>Pi;
          r^=Pi;
     }
     cout<<r<<"\n";
}
