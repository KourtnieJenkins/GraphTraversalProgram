#include "myheader.h"

void displayGraph(GRAPH* graph, int size){
    int i;
    
    printf("\nVertex\tList Containing Adjacent Vertices\n"
           "------\t---------------------------------\n");
    for(i = 0; i < size; ++i) {
        EDGE* pCrawl = graph->verArr[i].head;
        // NOTE** note that youre referencing the array within the graph struct!
        printf("%3c\t", graph->verArr[i].c);
        int j = 0;
        while (pCrawl) {
            if(j == 0){
                printf("%c", pCrawl->v->c);
                j++;
            }else{
                printf(" -> %c", pCrawl->v->c);
            }
            pCrawl = pCrawl->next;
        }
        printf("\n");
    }
}