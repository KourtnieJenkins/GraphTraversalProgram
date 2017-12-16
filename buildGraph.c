#include "myheader.h"

GRAPH* buildGraph(int size) {
    GRAPH* graph = (GRAPH*) malloc(sizeof (GRAPH));
    graph->size = size;

    // Create an array of adjacency lists.  Size of array will be == to size
    graph->verArr = (VERTEX*) malloc(size * sizeof (VERTEX));

    // Initialize each adjacency list as empty by making head as NULL
    int i;
    for (i = 0; i < size; ++i)
        graph->verArr[i].head = NULL;

    return graph;
}