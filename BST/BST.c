#include "BST.h"
#include <limits.h>

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode != NULL) {
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
    }
    return newNode;
}

Tree* createTree() {
    Tree* tree = (Tree*)malloc(sizeof(Tree));
    if (tree != NULL) {
        tree->root = NULL;
        tree->size = 0;
    }
    return tree;
}

void recursiveInsert(Node* root, int value) {
    if (value < root->data) {
        if (root->left == NULL) {
            root->left = createNode(value);
        } else {
            recursiveInsert(root->left, value);
        }
    } else {
        if (root->right == NULL) {
            root->right = createNode(value);
        } else {
            recursiveInsert(root->right, value);
        }
    }
}

void insert(Tree* tree, int value) {
    if (tree == NULL) {
        return;
    }

    if (tree->root == NULL) {
        tree->root = createNode(value);
    } else {
        recursiveInsert(tree->root, value);
    }

    tree->size++;
}

Node* recursiveFind(Node* root, int value) {
    if (root == NULL || root->data == value) {
        return root;
    }

    if (value < root->data) {
        return recursiveFind(root->left, value);
    } else {
        return recursiveFind(root->right, value);
    }
}

Node* find(Tree* tree, int value) {
    if (tree == NULL) {
        return NULL;
    }

    return recursiveFind(tree->root, value);
}

Node* recursiveRemove(Node* root, int value) {
    Node* temp;
    if (root == NULL) {
        return root;
    }

    if (value < root->data) {
        root->left = recursiveRemove(root->left, value);
    } else if (value > root->data) {
        root->right = recursiveRemove(root->right, value);
    } else {
        if (root->left == NULL) {
            temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            temp = root->left;
            free(root);
            return temp;
        }

        temp = root->right;
        while (temp->left != NULL) {
            temp = temp->left;
        }

        root->data = temp->data;

        root->right = recursiveRemove(root->right, temp->data);
    }

    return root;
}

void removeNode(Tree* tree, int value) {
    if (tree == NULL || tree->root == NULL) {
        return;
    }

    tree->root = recursiveRemove(tree->root, value);
    tree->size--;
}

void inorderPrint(Node* root) {
    if (root != NULL) {
        inorderPrint(root->left);
        printf("%d ", root->data);
        inorderPrint(root->right);
    }
}

void preorderPrint(Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderPrint(root->left);
        preorderPrint(root->right);
    }
}

void postorderPrint(Node* root) {
    if (root != NULL) {
        postorderPrint(root->left);
        postorderPrint(root->right);
        printf("%d ", root->data);
    }
}

void bfsPrint(Node* root) {
    Node* queue[1000];
    int front = 0, rear = 0;

    if (root == NULL) {
        return;
    }

    queue[rear++] = root;

    while (front < rear) {
        Node* current = queue[front++];
        printf("%d ", current->data);

        if (current->left != NULL) {
            queue[rear++] = current->left;
        }

        if (current->right != NULL) {
            queue[rear++] = current->right;
        }
    }
}

void print(Tree* tree, How how) {
    if (tree == NULL || tree->root == NULL) {
        return;
    }

    switch (how) {
        case INORDER:
            inorderPrint(tree->root);
            break;
        case PREORDER:
            preorderPrint(tree->root);
            break;
        case POSTORDER:
            postorderPrint(tree->root);
            break;
        case BFS:
            bfsPrint(tree->root);
            break;
    }

    printf("\n");
}

int size(Tree* tree) {
    return (tree != NULL) ? tree->size : 0;
}

int recursiveHeight(Node* root) {
    int leftHeight;
    int rightHeight;

    if (root == NULL) {
        return 0;
    }

    leftHeight = recursiveHeight(root->left);
    rightHeight = recursiveHeight(root->right);

    return 1 + ((leftHeight > rightHeight) ? leftHeight : rightHeight);
}

int height(Tree* tree) {
    return (tree != NULL && tree->root != NULL) ? recursiveHeight(tree->root) : 0;
}

int isBalancedUtil(Node* root) {
    int leftHeight;
    int rightHeight;

    if (root == NULL) {
        return 1;
    }

    leftHeight = recursiveHeight(root->left);
    rightHeight = recursiveHeight(root->right);

    if (abs(leftHeight - rightHeight) <= 1 && isBalancedUtil(root->left) && isBalancedUtil(root->right)) {
        return 1;
    }

    return 0;
}

int isBalanced(Tree* tree) {
    return (tree != NULL) ? isBalancedUtil(tree->root) : 1;
}

int isSortedUtil(Node* root, int* prev) {
    if (root != NULL) {
        if (!isSortedUtil(root->left, prev)) {
            return 0;
        }

        if (root->data <= *prev) {
            return 0;
        }

        *prev = root->data;

        return isSortedUtil(root->right, prev);
    }

    return 1;
}

int isSorted(Tree* tree) {
    int prev = INT_MIN;

    if (tree == NULL || tree->root == NULL) {
        return 1;
    }

    return isSortedUtil(tree->root, &prev);
}