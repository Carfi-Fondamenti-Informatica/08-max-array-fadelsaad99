#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int dim;
    cin>>dim;
    float arr[dim];
    float x;
    for(int i=0; i<dim; i++){
        cin>>x;
        arr[i]=x;
    }
    cout<<maggio(arr,dim);

    return 0;
}
