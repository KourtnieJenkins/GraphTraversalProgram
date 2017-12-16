#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/* -- Forward declaration -- */
struct EDGETAG;
struct NODE;

/* -- Graph structures -- */
typedef struct {
    char c;                 // holds data info
    bool isVisited;         // indicates if vertex has been visited 
    struct EDGETAG* head;   //  points to first edge in linked list
} VERTEX;

typedef struct EDGETAG {
    VERTEX* v;              // points to vertex that edge connects to
    struct EDGETAG* next;   // will connect to next EDGETAG in linked list structure
} EDGE;

typedef struct {
    int size;               // holds size of vertex array
    VERTEX* verArr;         // points to vertex array
} GRAPH;

/* -- Stack, Queue, & Priority Queue structures -- */
typedef struct NODETAG {
    VERTEX* data;
    struct NODETAG* next;
}NODE;

typedef struct {
    int count;
    struct NODETAG* top;
}STACK;

typedef struct {
    int count;
    struct NODETAG* first;
    struct NODETAG* last;
}QUEUE;


/* -- Graph prototypes -- */
void createVertex(VERTEX* v, int* size, char test);
int findIndex(VERTEX* v, int* arrSize, char c);
EDGE* createEdge(VERTEX* v);
GRAPH* buildGraph(int size);
void addEdge(GRAPH* graph, int index, VERTEX* v);
void displayGraph(GRAPH* graph, int size);
void resetVisit(GRAPH* graph, int size);

/* -- Depth-First prototypes -- */
void depthFirstSearch(VERTEX* start, STACK* stack);
void displayDFS(GRAPH* graph);

/* -- Stack prototypes -- */
void Stack(STACK* stack);
bool stackIsEmpty(STACK* stack);
void push(STACK* stack, VERTEX* data);
void pop(STACK* stack);

/* -- Queue prototypes -- */
void Queue(QUEUE* q);
void insert(QUEUE* q, VERTEX* v);
VERTEX* removeFromQ(QUEUE* q);
bool queueIsEmpty(QUEUE* q);

/* -- Breadth-First prototypes -- */
void breadthFirstSearch(GRAPH* graph, QUEUE* q);
void displayBFS(GRAPH* graph);