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
    int n,k;
    cin>>n>>k;

    map <int, bool> flag;
    int d;

    while (k--){
        cin>>d;
        flag[d] = true;
    }

    for (int i=n;i<=99999;i++){
        int d = i;

        int p = 0;
        while ( d ){
            int mo = d % 10;
            if ( flag[mo] ) {
                p = 1;
                break;
            }
            d/=10;
        }

        if ( p == 0 ) {
                cout<<i<<endl;
                return 0;
        }
    }
    return 0;
}
