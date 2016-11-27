#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int a[][2]={{0,1},{0,1},{1,-1},{1,-1},{0,1},{0,1}};
    int sum=-9999, psum=0, a_i, a_j;
    
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    for(int arr_i = 0;arr_i < 4;arr_i++){
       for(int arr_j = 0;arr_j < 4;arr_j++){
            psum=arr[arr_i][arr_j];
            a_i=arr_i;
            a_j=arr_j;
           for(int i=0;i<6;i++){
               a_i+=a[i][0];
               a_j+=a[i][1];
               psum+=(arr[a_i][a_j]);
                }
                     sum=max(sum,psum);
       }
    }
    
    cout<<sum<<"\n";
}
