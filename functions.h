#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_
#include "tree.h"

int level_max(Node *tree, int deep);
int level_nodes_amount(Node *tree, int curr, int desired);
int max_quantity_nodes(Node *tree);
int max_quantity_nodes(Node *tree);
void tree_print(Node *tree);
void tree_add_node(Node **tree, int value);

#endif
