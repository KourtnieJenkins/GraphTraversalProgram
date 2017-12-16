#include "myheader.h"

void addEdge(GRAPH* graph, int index, VERTEX* v) {
    
    EDGE* newEdge = createEdge(v);  // create new edge instance
    
    if (graph->verArr[index].head == NULL) {  // if head of list is empty
        newEdge->next = graph->verArr[index].head; // set old head to next of new edge
        graph->verArr[index].head = newEdge; // set new edge to head
    } else {
        EDGE* tmp = graph->verArr[index].head;
        
        while (tmp->next != NULL) { // if next edge if full
            tmp = tmp->next;        // continue to move down list
        }
        tmp->next = newEdge;        // place new edge at end of list
    }
    
}
