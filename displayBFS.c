#include "myheader.h"

void displayBFS(GRAPH* graph){
    QUEUE* q = (QUEUE*)malloc(sizeof(QUEUE));
    Queue(q);   // acts as a constructor for a QUEUE
    
    /* performs a breadth first search on the graph */
    breadthFirstSearch(graph, q);
}