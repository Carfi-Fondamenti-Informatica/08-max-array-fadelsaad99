#include "lib.h"
float maggio(float arr[], int dim) {
    float x=1;
    for (int k=0; k<dim; k++){
        if(arr[k]>x){
            x=arr[k];
        }
    }
    return x;
}
