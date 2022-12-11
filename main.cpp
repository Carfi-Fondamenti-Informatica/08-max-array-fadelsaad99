#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int m;
    cin>>m;
    float arr[m];
    float p;
    for(int i=0; i<m; i++){
        cin>>p;
        arr[i]=p;
    }
    cout<<ilmaggio(arr,m);

    return 0;
}
