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
 
int n;
int h[100001];
vector <int> dp(100001, 2e9);
int k;
 
int main()
{
    cin>>n;
    cin>>k;
    for (int i=0;i<n;i++){
        cin>>h[i];
    }
 
    dp[0] = 0;
    for (int i=1;i<n;i++){
        for (int j=1;j<=k;j++){
            if ( i - j >= 0 )
                dp[i] = min(dp[i-j]+abs(h[i-j]-h[i]), dp[i]);
        }
    }
 
    cout<<dp[n-1];
    return 0;
}
