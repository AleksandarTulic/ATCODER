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
    int niz[3];
    cin>>niz[0]>>niz[1]>>niz[2];
    sort(niz, niz+3);
    if ( niz[0] == niz[1] && niz[2] == 7 && niz[0] == 5 ){
            cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
