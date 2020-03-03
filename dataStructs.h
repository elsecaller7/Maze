//
// Created by ritik on 02/03/20.
//

#ifndef MAZE_DATASTRUCTS_H
#define MAZE_DATASTRUCTS_H

#include <stddef.h>

typedef struct coord {
    int x;
    int y;
} coord;

typedef struct node {
    coord place;
    char action;
    struct node *next;
} node;

typedef struct pathBlock {
    int cost;
    node *path;
    struct pathBlock *next;
} pathBlock;

typedef struct pQue {
    pathBlock *priority[100];
} pQue;


#endif //MAZE_DATASTRUCTS_H

