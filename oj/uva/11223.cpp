/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<map>
#include<sstream>
using namespace std;

int main()
{
    int t,l=0;
    string s;
    map<string, char> mp;
    mp[".-"] = 'A'; mp["-..."] = 'B'; mp["-.-."] = 'C';
    mp["-.."] = 'D'; mp["."] = 'E'; mp["..-."] = 'F';
    mp["--."] = 'G'; mp["...."] = 'H'; mp[".."] = 'I';
    mp[".---"] = 'J'; mp["-.-"] = 'K'; mp[".-.."] = 'L';
    mp["--"] = 'M'; mp["-."] = 'N'; mp["---"] = 'O';
    mp[".--."] = 'P'; mp["--.-"] = 'Q'; mp[".-."] = 'R';
    mp["..."] = 'S'; mp["-"] = 'T'; mp["..-"] = 'U';
    mp["...-"] = 'V'; mp[".--"] = 'W'; mp["-..-"] = 'X';
    mp["-.--"] = 'Y'; mp["--.."] = 'Z';
    mp["-----"] = '0'; mp[".----"] = '1'; mp["..---"] = '2';
    mp["...--"] = '3'; mp["....-"] = '4'; mp["....."] = '5';
    mp["-...."] = '6'; mp["--..."] = '7'; mp["---.."] = '8';
    mp["----."] = '9';
    mp[".-.-.-"] = '.'; mp["--..--"] = ','; mp["..--.."] = '?';
    mp[".----."] = '\''; mp["-.-.--"] = '!'; mp["-..-."] = '/';
    mp["-.--."] = '('; mp["-.--.-"] = ')'; mp[".-..."] = '&';
    mp["---..."] = ':'; mp["-.-.-."] = ';'; mp["-...-"] = '=';
    mp[".-.-."] = '+'; mp["-....-"] = '-'; mp["..--.-"] = '_';
    mp[".-..-."] = '"'; mp[".--.-."] = '@';
    cin>>t;
    cin.ignore();
    while(t--){
          l++;
          if(l!=1)
               cout<<"\n";
          getline(cin,s);
          cout<<"Message #"<<l<<"\n";
          stringstream ss;
          ss<<s;
          while(ss>>s){
               cout<<mp[s];
               if(ss.good()){
                    char c=ss.get();
                    c=ss.peek();
                    if(c==' ')
                         cout<<" ";
               }
          }
          cout<<"\n";
    }
}
