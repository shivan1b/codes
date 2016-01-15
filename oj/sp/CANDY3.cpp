/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    int T;
    long long N,p,sum;
    std::cin>>T;
    while(T--){
        sum=0;
        std::cin>>N;
        for(int i=0;i<N;i++){
            std::cin>>p;
            sum+=p;
            if(sum>N) sum %= N;
        }
        if(sum==0) std::cout<<"YES\n";
        else std::cout<<"NO\n";
    }
	return 0;
}
