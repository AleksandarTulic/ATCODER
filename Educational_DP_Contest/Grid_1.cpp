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
#define mod 1000000007
using namespace std;



int main()
{
    int h,w;
    cin>>h>>w;

    char a[h][w];
    int dp[h][w];

    for (int i=0;i<h;i++){
        for (int j=0;j<w;j++){
            dp[i][j] = 0;
            cin>>a[i][j];
        }
    }

    dp[0][0] = 1;
    for (int i=1;i<h;i++)
        if ( a[i][0] != '#' )
            dp[i][0] = dp[i-1][0];
        else break;

    for (int i=1;i<h;i++)
        if ( a[0][i] != '#' )
            dp[0][i] = dp[0][i-1];
        else break;

    for (int i=1;i<h;i++){
        for (int j=1;j<w;j++){
            if ( a[i][j] != '#' )
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
        }
    }

    cout<<dp[h-1][w-1];
    return 0;
}
