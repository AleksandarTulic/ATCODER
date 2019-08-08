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
 
    int br = 0;
    for (int i=1;i<=n;i++){
        int d = i;
        int b = 0;
        while ( d ) d/=10, b++;
        if ( b & 1 ) br++;
    }
 
    cout<<br<<endl;
    return 0;
}
