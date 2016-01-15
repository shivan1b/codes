/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<bits/stdc++.h>

int main()
{
    int N,x,y;
    scanf("%d",&N);
    while(N--){
        scanf("%d %d",&x,&y);
        if((x==y) || ((x-y)==2))
        {
            if((x&1)==0)
                printf("%d\n",x+y);
            else
                printf("%d\n",x+y-1);
        }
        else
            printf("No Number\n");
    }
	return 0;
}
