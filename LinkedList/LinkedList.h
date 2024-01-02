#include <stddef.h>

typedef struct Node{
    int num;
    struct Node *next;
} Node;

typedef enum Boolean{
    false,
    true
} Boolean;

Node* newNode(int x);
void destroy(Node* head);
void print(Node* head);
int search(Node* head, int num);
int length(Node* head);
Node* insertToStart(Node* head, int num);
Node* insertToEnd(Node* head, int num);
Node* insert(Node* head, int num, int pos);
Node* removeFirst(Node* head);
Node* removeLast(Node* head);
Node* removeFrom(Node* head, int pos);
Boolean equals(Node* head1, Node* head2);