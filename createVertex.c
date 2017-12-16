#include "myheader.h"

void createVertex(VERTEX* v, int* size, char test) {
    int i;
    bool flag = false;  // indicates if vertex already exists
    
    if (*size > 0) {     // if 1 or more vertex exist:
        
        for (i = 0; i < *size; i++) {   
            if ((test == v[i].c)) {     //if vertex already exists
                flag = true;            // set flag to true
            }
        }

        if (flag == false) {            // if flag is false,
            v[*size].c = test;          // create new vertex          
            v[*size].isVisited = false; // set isVisited to false
            ++*size;                    // increment number of items in array
            
        } else {                        // else, do nothing &
            flag = false;               // reset flag back to false
        }

    } else {            // if no vertex exist now
        v[0].c = test;
        //v[0].edgeIsEmpty = true;
        ++*size;
    }
    
} // End of createVertex()