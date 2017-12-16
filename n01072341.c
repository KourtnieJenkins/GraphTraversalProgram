/* 
 * File:   n01072341.c
 * Author: Kourtnie Jenkins
 *
 * Created on November 14, 2017, 9:41 AM
 * 

 */

#include "myheader.h"


int main(int argc, char** argv) {
    
    GRAPH* graph = buildGraph(25);  // NOT SURE IF SHOULD HARD CODE THIS??
    
    FILE* fp = fopen(argv[1], "r");  // opens file specified on command line.
    
    if(fp == NULL){
        printf("** Error. Unable to open file. **");
    }

    char c;
    char* a = (char*)malloc(sizeof(char)); //a[2];
    int i, count = 0, size = 0, indexA, indexB;
    
    /* -- places all possible vertices/edges into an array for processing -- */
    while ((c = fgetc(fp)) != EOF) {
        if (c >= 65 && c <= 90) {
            a[count] = c;
            createVertex(graph->verArr, &size, c);
            count++;

        } 
    }
    
    /* -- adds appropriate edges to graph -- */
    for(i = 1; i < count+1; i++){
        if(i%2 == 0){
            indexA = findIndex(graph->verArr, &size, a[i-2]);
            indexB = findIndex(graph->verArr, &size, a[i-1]);
            addEdge(graph, indexA, &graph->verArr[indexB]);
        }
    }

    /* -- displays graph using adjacent list -- */
    displayGraph(graph, size);

    /* -- performs a depth-first search on the graph -- */
    printf("\nDepth-First Search: ");
    displayDFS(graph);

    resetVisit(graph, size); //sets all vertices to unvisited status

    /* -- performs a breadth-first search on the graph -- */
    printf("\nBreadth-First Search: ");
    displayBFS(graph);

    resetVisit(graph, size); //sets all vertices to unvisited status

    printf("\n");
} // End main()