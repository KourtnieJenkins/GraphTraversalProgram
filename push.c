#include "myheader.h"

// Pushes a vertex onto top of stack
void push(STACK* stack, VERTEX* data){
    
    // create new node
    NODE* node = (NODE*)malloc(sizeof (NODE));

    if (!node) {
        printf("** Unable to create node. **"); // unsuccessful 
        
    } else {
        node->data = data;          // populates new node data with vertex
        node->next = stack->top;    // moves previous node at top of stack down, 
        stack->top = node;          // places new node at top 
        (stack->count)++;
    }
}