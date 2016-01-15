/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<stdio.h>
#include<cmath>

double cosCalculator(int a, int b, int c){
     double tmp=a*a+b*b-c*c;
     tmp=tmp/(2.0*a*b);
     return tmp;
}
int main()
{
     int AB,AC,AD,BC,BD,CD,t;
     scanf("%d",&t);
     while(t--){
          double cosA,cosB,cosC;
          scanf("%d %d %d %d %d %d",&AB,&AC,&AD,&BC,&BD,&CD);
          cosA=cosCalculator(AD,BD,AB);
          cosB=cosCalculator(BD,CD,BC);
          cosC=cosCalculator(CD,AD,AC);
          double ans=sqrt(1+2*cosA*cosB*cosC-cosA*cosA-cosB*cosB-cosC*cosC);
          ans=(AD*BD*CD*ans)/6.0;
          printf("%.4lf\n",ans);
     }
}
