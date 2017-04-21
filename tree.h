#ifndef __TREE_H__
#define __TREE_H__

typedef struct Tree {
    int data;
    struct Tree *node_right;
    struct Tree *node_left;
} Node;
#endif
