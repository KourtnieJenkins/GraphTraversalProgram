#include "myheader.h"

// Acts as a constructor for a Queue
void Queue(QUEUE* q){
    q->first = NULL;    // sets first in queue to NULL
    q->last = NULL;     // sets last in queue to NULL
    q->count = 0;       // sets initial count of stack to 0
}