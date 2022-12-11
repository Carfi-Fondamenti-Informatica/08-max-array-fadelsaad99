#include "lib.h"
float ilmaggio(float arr[], int m) {
    float x=1;
    for (int t=0; t<m; t++){
        if(arr[t]>x){
            x=arr[t];
        }
    }
    return x;
}
