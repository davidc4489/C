#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <stdlib.h>

typedef enum {
    INORDER,
    POSTORDER,
    PREORDER,
    BFS
} How;

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

typedef struct Tree {
    Node* root;
    int size;
} Tree;

Tree* createTree();
void insert(Tree* tree, int value);
Node* find(Tree* tree, int value);
void removeNode(Tree* tree, int value);
void print(Tree* tree, How how);
int size(Tree* tree);
int height(Tree* tree);
int isBalanced(Tree* tree);
int isSorted(Tree* tree);

#endif