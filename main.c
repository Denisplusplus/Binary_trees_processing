#include <stdio.h>
#include <stdlib.h>

#include "tree.h"

int node_quantity(Node *node, int curr, int desired)
{
    if (node == NULL) return 0;
    if (curr == desired) return 1;
    return node_quantity (node->node_left,  curr+1, desired) +
           node_quantity (node->node_right, curr+1, desired);
}

void tree_print(Node * tree)
{
	if (tree) {
		tree_print(tree->node_left);
		printf("%d\n", tree->data);
		tree_print(tree->node_right);
	}
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

    if(value <= (*tree)->data)
    {
        tree_add_node(&(*tree)->node_left, value);
    }
    else if(value > (*tree)->data)
    {
        tree_add_node(&(*tree)->node_right, value);
    }
    free(new);
}




int main(void)
{
	Node *Tree = NULL;
	
		tree_add_node(&Tree, 10);
		tree_add_node(&Tree, 7);
		tree_add_node(&Tree, 9);
		tree_add_node(&Tree, 12);
		tree_add_node(&Tree, 6);
		tree_add_node(&Tree, 14);
		tree_add_node(&Tree, 11);
		tree_add_node(&Tree, 3);
		tree_add_node(&Tree, 4);


		tree_print(Tree);

  		printf ("Level %d has %d node(s)\n", 1, node_quantity (Tree, 0, 1));
  		printf ("Level %d has %d node(s)\n", 2, node_quantity (Tree, 0, 2));
  		printf ("Level %d has %d node(s)\n", 3, node_quantity (Tree, 0, 3));
	return 0;

}
