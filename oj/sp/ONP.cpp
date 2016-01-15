/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<bits/stdc++.h>

#define fio std::ios_base::sync_with_stdio(false)
#define ll long long
#define inp(x) std::cin>>x

int main()
{
    fio;
    int t;
    std::string s;
    inp(t);
    while(t--)
    {
            inp(s);
            std::stack<char> op;
            std::string::const_iterator i=s.begin();
            for(;i!=s.end();i++)
            {
                char c=*i;
                if(c=='(')
                    op.push(c);
                else if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^')
                    op.push(c);
                else if(c==')'){
                    while(op.top()!='(')
                    {
                        std::cout<<op.top();
                        op.pop();
                    }
                    op.pop();
                }
                else
                    std::cout<<c;
            }
            std::cout<<"\n";
    }
	return 0;
}
