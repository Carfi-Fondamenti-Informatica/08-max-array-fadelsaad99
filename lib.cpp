#include "lib.h"
float massimo(float a[], int h) {
    float d=1;
    for (int j=0; j<h; j++){
        if(a[j]>d){
            d=a[j];
        }
    }
    return d;
}
