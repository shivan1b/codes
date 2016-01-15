/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<bits/stdc++.h>
using namespace std;
float A[270];

void cardLen(){
        A[1]=0.50;
    for(int i=2;i<264;i++){
        A[i]=A[i-1]+(1+(float)(1/(i+1)));
    }
}
int main()
{
    cardLen();
    float val;
    int cards,i;
    while(cin>>val && val!=0.00){
        for(i=2;A[i]<val;i++);
        cout<<i-2<<" card(s)\n";
    }
	return 0;
}
