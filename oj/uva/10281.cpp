/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
     char s[1000];
     int hh,mm,ss,speed,now,then=0,spAux=0;
     double dist=0;
     while(cin.getline(s,sizeof(s))){
          int n=sscanf(s,"%d:%d:%d %d",&hh,&mm,&ss,&speed);
          int time=ss+mm*60+hh*60*60;
          now=time-then;
          then=time;
          dist=dist+spAux*now;
          if(n==3)
               printf("%2d:%2d:%2d %.2lf km\n",hh,mm,ss,dist/3600);
          else
               spAux=speed;
     }
}
