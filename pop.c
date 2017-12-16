#include "myheader.h"

// Pops a vertex from top of stack
void pop(STACK* stack){
    
    NODE* node;
    
    if(!stackIsEmpty(stack)){           // if stack is not empty
        
        //printf("%c", stack->top->data->c);
        node = stack->top;              // set new node to top of stack
        stack->top = (stack->top)->next;// set new top of stack to next node
        stack->count--;                 // decrease stack amount
        free(node);                     // frees node
        
    }else{
        printf("\nERROR: Stack is empty!");   // unsuccessful
    }    
}