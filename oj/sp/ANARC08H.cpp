/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int main()
{
     long n,d;
     while(cin>>n>>d && n!=0 && d!=0){
          long safe=1;
          for(int i=1;i<=n;i++)
               safe=(safe+d-1)%i+1;
          cout<<n<<" "<<d<<" "<<safe<<"\n";
     }
}
