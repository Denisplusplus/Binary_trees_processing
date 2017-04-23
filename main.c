#include <stdio.h>
#include <stdlib.h>

#include "tree.h"
#include "functions.h"





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
	level_with_max_nodes_amount(Tree);

	//	tree_print(Tree);
		return 0;

	
}
