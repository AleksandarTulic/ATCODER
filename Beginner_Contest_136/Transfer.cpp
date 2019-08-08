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
    int a, b, c;
    cin>>a>>b>>c;
 
    cout<<c-min(a-b, c)<<endl;
    return 0;
}
