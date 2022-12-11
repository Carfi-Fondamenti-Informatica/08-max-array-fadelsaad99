#include "lib.h"
float mass(float a[], int dim) {
    float c=1;
    for (int j=0; j<h; j++){
        if(a[j]>c){
            c=a[j];
        }
    }
    return c;
}
