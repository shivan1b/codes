/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int main()
{
     int t;
     bool p;
     uint64_t N;
     cin>>t;
     while(t--){
          cin>>N>>p;
          if(p==0)
               cout<<"Airborne wins.\n";
          else
               cout<<"Pagfloyd wins.\n";
     }
}
