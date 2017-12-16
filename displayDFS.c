#include "myheader.h"

void displayDFS(GRAPH* graph){
    STACK* stack = (STACK*)malloc(sizeof(STACK));
    Stack(stack);   // acts as a constructor for a STACK
    
    /* performs a depth first search on the graph */
    depthFirstSearch(&graph->verArr[0], stack);
}
