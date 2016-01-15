/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    while(cin>>N && N!=-1){
        int A[N],sum=0,candy=0;
        if(N==0) cout<<"0\n";
        else {
        for(int i=0;i<N;i++){
            cin>>A[i];
            sum+=A[i];
        }
        if(sum % N==0){
            sort(A,A+N);
            int y=sum/N;
            for(int i=0;A[i]<=y;i++)
                candy+=(y-A[i]);
            cout<<candy<<"\n";
        }
        else cout<<"-1\n";
        }
    }
	return 0;
}
