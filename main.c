#include <stdio.h>
#include <stdlib.h>

#include "tree.h"

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
	for (int i = 0; i < 10; i++ ) {
		tree_add_node(&Tree, i);
	}
	tree_print(Tree);

	return 0;

}
