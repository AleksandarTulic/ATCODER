#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
#include <utility>
#include <queue>
#define ull unsigned long long
#define ll long long
#define mod 998244353
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    int h[n];
    for (int i=0;i<n;i++) cin>>h[i];
 
    if ( n == 1 ){
        cout<<"Yes";
        return 0;
    }
 
    for (int i=1;i<n;i++){
        if ( h[i-1] > h[i] ){
            if ( h[i-1] - h[i] >= 2 ){
                cout<<"No";
                return 0;
            }
            else{
                h[i]++;
            }
        }
    }
 
    cout<<"Yes"<<endl;
    return 0;
}
