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
    int n;
    cin>>n;

    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    int mm = 2e9;
    for (int i=-100;i<=100;i++){
        int cost = 0;
        for (int j=0;j<n;j++){
            cost+=(i-a[j])*(i-a[j]);
        }

        mm=  min(mm, cost);
    }

    cout<<mm<<endl;
    return 0;
}
