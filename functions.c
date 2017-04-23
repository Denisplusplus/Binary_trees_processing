#include <stdio.h>
#include <stdlib.h>

#include "functions.h"
#include "tree.h"

#define max(x,y) ((x) > (y) ? (x) : (y))
#define DEEP 0
#define CURRENT 0

int level_max(Node *tree, int deep)
{
    if (!tree) return (deep - 1);
    return max(level_max(tree->node_left, deep + 1), level_max(tree->node_right, deep + 1)) ;
}


int level_nodes_amount(Node *tree, int curr, int desired)
{
	if (tree == NULL)    return 0;
    if (curr == desired) return 1;
    return level_nodes_amount (tree->node_left,  curr + 1, desired) + 
    	   level_nodes_amount (tree->node_right, curr + 1, desired);
}


int max_quantity_nodes(Node *tree)
{	
	int max_quantity = 0;
	int max_level    = level_max(tree, DEEP);
	for (int level = 0; level < max_level; level++) {
		if (level_nodes_amount(tree, CURRENT, level + 1) > max_quantity) {
			max_quantity = level_nodes_amount(tree, CURRENT, level + 1);
		}
	}
	return max_quantity;
} 


void level_with_max_nodes_amount(Node *tree)
{	
	printf("Level(s) with maximal quantity of nodes:\n");
	int max_level    = level_max(tree, DEEP);
	int max_quantity = max_quantity_nodes(tree);
	for (int level = 0; level < max_level; level++){
		if (level_nodes_amount(tree, CURRENT, level + 1) == max_quantity){
			printf("%d\n", level + 1);
		}
	}
}


void tree_print(Node *tree)
{
	if (tree) {
		tree_print(tree->node_left);
		printf("%d\n", tree->data);
		tree_print(tree->node_right);
	}
}


void destroy(Node *tree)
{
    if (tree) {
        destroy(tree->node_right);
        destroy(tree->node_left);
    }
    free(tree);
}


void tree_add_node(Node **tree, int value)
{
    Node *new = NULL;
    if(!(*tree))
    {
        new = (Node *)malloc(sizeof(Node));
        new->node_left = new->node_right = NULL;
        new->data = value;
        *tree = new;
        return;
    }

    if(value <= (*tree)->data) {
        tree_add_node(&(*tree)->node_left, value);
    } else 
    if(value > (*tree)->data) {
        tree_add_node(&(*tree)->node_right, value);
    }
    free(new);
}
