#include "myheader.h"

void breadthFirstSearch(GRAPH* graph, QUEUE* q) {
    
    // handles starting point
    printf("%c", graph->verArr[0].c);
    graph->verArr[0].isVisited = true;
    insert(q, &graph->verArr[0]);

    VERTEX* tmpV;   // will hold removed vertices
    
    while (!queueIsEmpty(q)) {  // while q is not empty
        
        tmpV = removeFromQ(q);   // remove first vertex
        
        EDGE* tmpE = tmpV->head;
        
        while(tmpE != NULL) {
            if (tmpE->v->isVisited == false) {
                printf("%c", tmpE->v->c);
                tmpE->v->isVisited = true;
                insert(q, tmpE->v);
            }
            tmpE = tmpE->next;            
        }
    }
}