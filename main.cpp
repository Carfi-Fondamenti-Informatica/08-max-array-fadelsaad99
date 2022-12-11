#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int h;
    cin>>h;
    float d[h];
    float x;
    for(int i=0; i<h; i++){
        cin>>x;
        d[i]=x;
    }
    cout<<max(d,h);
    return 0;
}
