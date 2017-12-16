#include "myheader.h"

int findIndex(VERTEX* v, int* arrSize, char c){
    int i, index;
    
    for(i = 0; i < *arrSize; i++){
        if(c == v[i].c){
            index = i;
        }
    }
    return index;
}
