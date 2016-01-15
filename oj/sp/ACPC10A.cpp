/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<bits/stdc++.h>

using namespace std;
int main()
{
    float a1,a2,a3;
    while(1){
        cin>>a1>>a2>>a3;
        if(a1==0 && a2==0 &&a3==0)
            break;
        float APExp=(a3+a1)/2;
        if(a2==APExp){
            cout<<"AP "<<a1+3*(a2-a1)<<"\n";
        }
        else{
            float r=a2/a1;
            cout<<"GP "<<a1*r*r*r<<"\n";
        }
    }
	return 0;
}
