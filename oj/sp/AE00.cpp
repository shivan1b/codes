/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    int n,h;
    std::cin>>n;
    int p=n;
    for(int i=2;;i++){
        h=(n/i)-i+1;
        if(h>0)
            p+=h;
        else break;
    }
    std::cout<<p<<"\n";
	return 0;
}
