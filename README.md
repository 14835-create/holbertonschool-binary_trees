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
|      |             |
|      |             |
|      |             |

## Tasks  🧩
There is 19 tasks in total, all betty compliant:

1. [0-binary\_tree\_node.c](./0-binary_tree_node.c): Function creates new binary tree node with parent/value. New node starts with no children.
compiled with: gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary\_tree\_print.c 0-main.c 0-binary\_tree\_node.c -o 0-node
result:
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)

2. [1-binary\_tree\_insert\_left.c](./1-binary_tree_insert_left.c): Function creates a new left child. If parent left child already present, old child becomes left child of new node.
compiled with: gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary\_tree\_print.c 1-main.c 1-binary\_tree\_insert\_left.c 0-binary\_tree\_node.c -o 1-left
result:
  .--(098)--.
(012)     (402)

       .--(098)-------.
  .--(054)       .--(402)
(012)          (128)   

3. []():
