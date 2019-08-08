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

int dp[3][100001];

int main()
{
    int n;
    cin>>n;

    int niz[3][n];

    for (int i=0;i<n;i++){
        cin>>niz[0][i]>>niz[1][i]>>niz[2][i];
    }

    dp[0][0] = niz[0][0];
    dp[1][0] = niz[1][0];
    dp[2][0] = niz[2][0];

    for (int i=1;i<n;i++){
        dp[0][i] = max(dp[1][i-1] + niz[0][i], dp[2][i-1] + niz[0][i]);
        dp[1][i] = max(dp[0][i-1] + niz[1][i], dp[2][i-1] + niz[1][i]);
        dp[2][i] = max(dp[1][i-1] + niz[2][i], dp[0][i-1] + niz[2][i]);
    }

    cout<<max(dp[1][n-1], max(dp[0][n-1], dp[2][n-1]));
    return 0;
}
