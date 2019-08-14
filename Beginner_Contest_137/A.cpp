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
    int a,b;
    cin>>a>>b;
 
    cout<<max(a+b, max(a*b, a-b));
    return 0;
}
