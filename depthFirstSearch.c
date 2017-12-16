#include "myheader.h"

void depthFirstSearch(VERTEX* start, STACK* stack){
    if(start->isVisited == true) {          // return if vertex already visited
        return;
    } else if (start->isVisited == false) { 
        start->isVisited = true;            // update visited status
        printf("%c", start->c);
        push(stack, start);
        
        
        if(start->head != NULL){        // handles first vertex in adjacent list
            depthFirstSearch(start->head->v, stack);
            
        }else if(start->head == NULL){  // if vertex does not have adjacent list,
            pop(stack);                // then pop from stack and return
            return;
        }        

        if (start->head->next != NULL   // handles other vertices in adjacent list
                && start->head->next->v->isVisited == false) {
            
            depthFirstSearch(start->head->next->v, stack);
            EDGE* edge = start->head->next;
            while (edge) {
                depthFirstSearch(edge->v, stack);
                edge = edge->next;
            }
        }
    }
        pop(stack);
}