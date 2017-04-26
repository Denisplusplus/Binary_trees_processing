# Processing of binary trees
### The task №35:
Determine the level of a binary tree with the max number of vertices.
### Algorithm:
 Realize these actions: 
  * Add the node to the tree
  * Delete the node from the tree
  * Destroy the tree
  * Print the tree
  * Find the level(s) with the maximal quantity of the nodes (task)
### Description of solution the task:
##### Realise these functions:
1) level_nodes_amount - function, that finds the amount of vertices in demanded level
2) level_max - function, that finds maximal level (using the dfs)
3) max_quantity_nodes - function, that finds the maximal quantity of the nodes
4) level_with_max_nodes_amount -function, that finds level(s) with the maximal quantity of nodes
-------------------------------------------------------------------------------------------------
* Firstly, create function level_nodes_amount
* Secondly, find maximal level of the tree (level_max)
* Thirdly, make a loop on levels and find the maximal quantity of the nodes(max_quantity_nodes)
* Fourthly, print the level(s) with the maximal quantity of the nodes(level_with_max_nodes_amount)
### Testing:
Using this http://learnc.info/adt/binary_search_tree.html to find  
the true examples and check correctness of working the program
### How to use:
* Download this folder to your PC
* Type 'make' to compile
* Launch by typing ./start
* Type 'help' to gain the information about the keys to control the app 

Here is the keys description:
* 'add' - to insert the node 
* 'delete' - to delete the node
* 'print' - to print the binary tree
* 'destroy' - to delete the binary tree
* 'task' - to start finding the level(s) with the maximal quantity of the nodes
* 'exit' or 'quit' - to quit application
