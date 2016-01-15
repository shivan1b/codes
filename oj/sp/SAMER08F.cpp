/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<bits/stdc++.h>

int main()
{
    int N, num_sq;
    scanf("%d",&N);
    while(N!=0){
        num_sq=N*(N+1)*(2*N+1);
        printf("%d\n",num_sq/6);
        scanf("%d",&N);
    }
	return 0;
}
