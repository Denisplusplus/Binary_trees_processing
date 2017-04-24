#include <stdio.h>
#include <stdlib.h>

#include "tree.h"
#include "functions.h"

#define TRUE 1


int main(void)
{	

	char s[8];
	Node *Tree = NULL;
	int value = 0;
 	printf("\nType 'help' to gain information how to use the app.\n\n");
	    while (TRUE) {
		scanf("%7s", s);
		if (!strcmp(s, "add")) {
		    while (scanf("%d", &value))
		      tree_add_node(&Tree, value);
		} else
		if (!strcmp(s, "delete")) {
		    while (scanf("%d", &value))
			Tree = tree_delete_node(Tree, value);
		} else
		if (!strcmp(s, "print")) {
		    printf("\n\n");
		    if (!Tree)
			printf("Tree is empty.\n");
		    tree_print(Tree);
		    printf("\n\n");
		} else
		if (!strcmp(s, "destroy")) {
			destroy(Tree);
		    Tree = NULL;
		} else
		if (!strcmp(s, "help")) {
			help();
		} else
		if (!strcmp(s, "task")) {
			if (!Tree) {
			printf("Tree is empty.\n");
			} else
		    if (!Tree->node_right && !Tree->node_left) {
			printf("Required one more to start the program.\n\n");
		    } else
			level_with_max_nodes_amount(Tree);
		} else
		if (!strcmp(s, "quit") || !strcmp(s, "exit")) {
			destroy(Tree);
			break;
		} else {
				printf("An error occurred. Type 'help' to find the solution\n");
				exit(1);
			}	
	    }

    return 0;
}
