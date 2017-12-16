#include "myheader.h"

void insert(QUEUE* q, VERTEX* v){
    
    NODE* node = (NODE*)malloc(sizeof (NODE));  // create new node
    
    if (!node) {
        printf("** Unable to create node. **"); // unsuccessful 
        return;
    }
    
    node->data = v;     //populate node with v
    node->next = NULL;  // set node next to NULL
    
    if(q->first == NULL){
        q->first= node;
        q->last = node;
    }else{
        q->last->next = node;   // set current last->next to new node
        q->last = node;         // set last to new node
    }
}