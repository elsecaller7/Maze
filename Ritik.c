//
// Created by ritik on 02/03/20.
//


#include "Ritik.h"


void inti_PQue(pQue *PQ, coord start) {
    for (int i = 1; i < 100; ++i) {
        PQ->priority[i] = NULL;
    }
    node *head = malloc(sizeof(node));
    head->place.x = start.x;
    head->place.y = start.y;
    head->action = 0;
    head->next
    PQ->priority[0]->path =

}

void insert_Pque(pQue *PQ, pathBlock *new) {
    int index = new->cost;
    new->next = PQ->priority[index]->next;
    PQ->priority[index]->next = new;
}

