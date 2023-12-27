#include "BST.h"

int main() {
    Tree* tree = createTree();
    Node* foundNode;

    insert(tree, 50);
    insert(tree, 30);
    insert(tree, 20);
    insert(tree, 40);
    insert(tree, 70);
    insert(tree, 60);
    insert(tree, 80);

    printf("Inorder: ");
    print(tree, INORDER);

    printf("Preorder: ");
    print(tree, PREORDER);

    printf("Postorder: ");
    print(tree, POSTORDER);

    printf("BFS: ");
    print(tree, BFS);

    foundNode = find(tree, 40);
    if (foundNode != NULL) {
        printf("Node with value 40 found.\n");
    } else {
        printf("Node with value 40 not found.\n");
    }

    removeNode(tree, 40);

    printf("Inorder after removal: ");
    print(tree, INORDER);

    printf("Size of the tree: %d\n", size(tree));
    printf("Height of the tree: %d\n", height(tree));

    if (isBalanced(tree)) {
        printf("The tree is balanced.\n");
    } else {
        printf("The tree is not balanced.\n");
    }

    if (isSorted(tree)) {
        printf("The tree is sorted.\n");
    } else {
        printf("The tree is not sorted.\n");
    }

    free(tree);

    return 0;
}
