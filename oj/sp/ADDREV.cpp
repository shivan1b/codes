/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<bits/stdc++.h>

#define fio std::ios_base::sync_with_stdio(false)
#define ll long long
#define inp(x) std::cin>>x

int rev(int n)
{
    int r=0;
    while(n)
    {
        r=(r*10) + (n%10);
        n/=10;
    }
    return r;
}
int main()
{
    fio;
    int N,r_num1,r_num2,num1,num2;
    inp(N);
    while(N--)
    {
        inp(r_num1);
        num1=rev(r_num1);
        inp(r_num2);
        num2=rev(r_num2);
        std::cout<<rev(num1+num2)<<"\n";
    }
	return 0;
}
