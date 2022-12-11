#include "lib.h"
float max(float d[], int h) {
    float a=1;
    for (int j=0; j<h; j++){
        if(d[j]>a){
            a=d[j];
        }
    }
    return a;
}
