#include <stdio.h>
#include "LinkedList.h"
int main() {
    Node* head1=NULL,*head2=NULL;
    head1 = insertToStart(head1,1);
    head1 = insertToEnd(head1,3);
    head1 = insert(head1,2,2);
    printf("%d\n", search(head1,2));
    printf("%d\n", length(head1));
    print(head1);
    head2 = insertToEnd(head2,1);
    head2 = insertToEnd(head2,2);
    head2 = insertToEnd(head2,3);
    if(equals(head1,head2))
        printf("true\n");
    else
        printf("false\n");
    head1 = removeFrom(head1,2);
    head1 = removeLast(head1);
    head1 = removeFirst(head1);
    destroy(head1);
    destroy(head2);
    return 0;
}