#include "myheader.h"

VERTEX* removeFromQ(QUEUE* q){
    NODE* node;
    VERTEX* dataOut;
    
    if(!queueIsEmpty(q)){           // if queue is not empty
        
        dataOut = q->first->data; // point dataOut to first vertex
        //printf("%c", q->first->data->c);//prints removed vertex
        node = q->first;                // set new node to top of stack
        q->first = q->first->next;      // set new first of stack to next node
        q->count--;                     // decrease stack amount
        //free(node);                     // frees node
        
    }else{
        printf("\nERROR: Queue is empty!");   // unsuccessful
    }
    
    return dataOut;
}