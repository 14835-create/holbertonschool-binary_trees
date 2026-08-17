# C - Binary Trees
In this project from Holberton School I learnt how to use binary trees.

## Learning Objectives 🧠
- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

## Header file  📁
[binary\_trees.h](./binary_trees.h): Header file containing all definitions and prototypes for all projects.

## Project File Table 📁
The following files are included in this project:

| File | Description |
| ---- | ----------- |
| 0-binary\_tree\_node.c | Write a function that creates a binary tree node |
| 1-binary\_tree\_insert\_left.c | Write a function that inserts a node as the left-child of another node |
| 2-binary\_tree\_insert\_right.c | Write a function that inserts a node as the right-child of another node |
| 3-binary\_tree\_delete.c | Write a function that deletes an entire binary tree |
| 4-binary\_tree\_is\_leaf.c | Write a function that checks if a node is a leaf |
| 5-binary\_tree\_is\_root.c | Write a function that checks if a given node is a root |
| 6-binary\_tree\_preorder.c | Write a function that goes through a binary tree using pre-order traversal |
| 7-binary\_tree\_inorder.c | Write a function that goes through a binary tree using in-order traversal |
| 8-binary\_tree\_postorder.c | Write a function that goes through a binary tree using post-order traversal |
| 9-binary\_tree\_height.c | Write a function that measures the height of a binary tree |
| 10-binary\_tree\_depth.c | Write a function that measures the depth of a node in a binary tree |
| 11-binary\_tree\_size.c | Write a function that measure the size of a binary tree |
| 12-binary\_tree\_leaves.c | Write a function that counts the leaves in a binary tree |
| 13-binary\_tree\_nodes.c | Write a function that counts the nodes with at least 1 child in a binary tree |
| 14-binary\_tree\_balance.c | Write a function that measures the balance factor of a binary tree |
| | |


## Tasks  🧩
There is 19 tasks in total, all betty compliant:

1. [0-binary\_tree\_node.c](./0-binary_tree_node.c): Function creates new binary tree node with parent/value. New node starts with no children.

2. [1-binary\_tree\_insert\_left.c](./1-binary_tree_insert_left.c): Function creates a new left child. If parent left child already present, old child becomes left child of new node.

3. [2-binary\_tree\_insert\_right.c](./2-binary_tree_insert_right.c): Function creates new right child. If parent right child already present, old child becomes right child of new node.

4. [3-binary\_tree\_delete.c](./3-binary_tree_delete.c): Function deletes entire tree by freeing every node. Traversal so children are deleted before parent.

5. [4-binary\_tree\_is\_leaf.c](./4-binary_tree_is_lead.c): Function returns1 if node is a leaf, otherwise NULL if node has child 0.

6. [5-binary\_tree\_is\_root.c](./5-binary_tree_is_root.c): Function checks if node if root of tree. Returns 1 if node exists otherwise 0 if node is NULL or has parent.

7. [6-binary\_tree\_preorder.c](./6-binary_tree_preorder.c): Function traverses binary tree with preorder traveral. Visits current node first, then left child tree, then right child tree.

8. [7-binary\_tree\_inorder.c](./7-binary_tree_inorder.c): Function traverses binary tree in order traveral. Visits left tree first then current node, then right tree.

9. [8-binary\_tree\_postorder.c](./8-binary_tree_postorder.c): Function traverses binary tree wiyh post order traversal. Visits left, right then current node.

10. [9-binary\_tree\_height.c](./9-binary_tree_height.c): Function measures height of binary tree. Height is num of edges on longest down path from node to leaf. Returns 0 if tree NULL, otherwise returns height of subtree.

11. [10-binary\_tree\_depth.c](./10-binary_tree_depth.c): Function measure the depth of binary tree node. Depth number od edges from node to root.

12. [11-binary\_tree\_size.c](./11-binary_tree_size.c): Function measures size of binary tree, total numnber of nodes in tree.

13. [12-binary\_tree\_leaves.c](./12-binary_tree_leaves.c): Function counts number of leaf nodes in binary tree. Returns 0 tree is NULL, return 1 if node is lead otherwise returns sum of leaf counts from left to right tree.

14. [13-binary\_tree\_nodes.c](./13-binary_tree_nodes.c): Function counts number of nodes in binary tree with at least 1 child. Return 0 if tree NULL, returns 1 for each node that has one child.

15. [14-binary\_tree\_balance.c](./14-binary_tree_balance.c): Function calculates balance factor of binary tree node. Subtracting height of right from left subtree.

16. []():
