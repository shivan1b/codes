/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<bits/stdc++.h>

using namespace std;

int M[1003],F[1003];
int main()
{
    int t,N;
    cin>>t;
    while(t--){
        cin>>N;
        for(int i=0;i<N;i++)
            cin>>M[i];
        for(int i=0;i<N;i++)
            cin>>F[i];
        sort(M,M+N);
        sort(F,F+N);
        int sum=0;
        for(int i=0;i<N;i++)
            sum+=(M[i]*F[i]);
        cout<<sum<<"\n";
    }
	return 0;
}
