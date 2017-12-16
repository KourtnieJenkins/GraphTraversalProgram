#include "myheader.h"

EDGE* createEdge(VERTEX* v) { 
    EDGE* newEdge =
            (EDGE*) malloc(sizeof (EDGE));
    newEdge->v = v;
    newEdge->next = NULL;
    
    return newEdge;
}