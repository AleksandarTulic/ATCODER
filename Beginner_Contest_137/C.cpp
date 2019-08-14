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
    int n;
    cin>>n;
 
    ll br = 0;
    string g;
    map <string, ll> m;
    for (int i=0;i<n;i++){
        cin>>g;
        sort(g.begin(), g.end());
        br+=m[g];
        m[g]++;
    }
 
    cout<<br<<endl;
    return 0;
}
