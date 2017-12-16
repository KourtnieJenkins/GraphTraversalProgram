#include "myheader.h"

// Acts as a constructor for a Stack
void Stack(STACK* stack){
    stack->top = NULL;      // sets initial top of stack to NULL
    stack->count = 0;       // sets initial count of stack to 0
}
