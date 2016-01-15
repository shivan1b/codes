/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<map>
using namespace std;

map<string,int> FriendsOfFriends;
map<string,bool> Friends;
map<string,int>::iterator it;

int main()
{
     ios_base::sync_with_stdio(false);
     int N,M,c=0;
     string s;
     cin>>N;
     while(N--){
          cin>>s;
          Friends[s]=true;
          cin>>M;
          while(M--){
               cin>>s;
               FriendsOfFriends[s]++;
          }
     }
     for(it=FriendsOfFriends.begin();it!=FriendsOfFriends.end();it++){
          if(Friends[it->first])
               FriendsOfFriends[it->first]=0;
          if(it->second>=1)
               c++;
     }
     cout<<c<<"\n";
}
