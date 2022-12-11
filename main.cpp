#include <iostream>
#include "lib.h"
using namespace std;

int main() {

    int h;
    cin>>h;
    float a[h];
    float x;
    for(int i=0; i<h; i++){
        cin>>x;
        a[i]=x;
    }
    cout<<massimo(a,h);

    return 0;
}
