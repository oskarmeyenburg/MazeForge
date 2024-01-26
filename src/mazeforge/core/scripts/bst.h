#ifndef BST_H
#define BST_H

#include <stdbool.h>

typedef struct Node {
    int value;
    bool exists;
    struct Node* lower; // left child -> lower value
    struct Node* higher; // right child -> higher value
} Node;

typedef struct BinaryTree {
    Node* root;
    int size;
} BinaryTree;

BinaryTree* bst_create();
void bst_insert(BinaryTree* tree, int value);
void bst_remove(BinaryTree* tree, int value);
bool bst_contains(BinaryTree* tree, int value);
void bst_print(BinaryTree* tree);

#endif // BST_H