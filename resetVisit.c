#include "myheader.h"

void resetVisit(GRAPH* graph, int size){
     int i;
    
    for(i = 0; i < size; ++i) {
        EDGE* pCrawl = graph->verArr[i].head;
        graph->verArr[i].isVisited = false;
        
        while (pCrawl) {
            pCrawl->v->isVisited = false;            
            pCrawl = pCrawl->next;
        }
    }
}