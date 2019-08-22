#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <map>

using namespace std;

int main()
{
    int n,l;
    cin>>n>>l;

    vector <string> g(n);
    for (int i=0;i<n;i++) cin>>g[i];

    sort(g.begin(), g.end());
    for (int i=0;i<g.size();i++) cout<<g[i];
    return 0;
}
