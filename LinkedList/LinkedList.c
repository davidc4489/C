#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
Node* newNode(int x){
    Node *tmp=NULL;
    tmp = (Node *) malloc(sizeof(Node));
    if(tmp != NULL){
        tmp->num=x;
        tmp->next = NULL;
    }
    return tmp;
}

void destroy(Node* head){
    if(head == NULL)
        return;
    while(head != NULL){
        Node* tmp = head;
        head = head->next;
        free(tmp);
    }
}

int length(Node* head){
    int s=0;
    while(head != NULL){
        s+=1;
        head=head->next;
    }
    return s;
}

void print(Node* head){
    while(head != NULL){
        printf("%d ", head->num);
        head = head->next;
    }
    putchar('\n');
}

int search(Node* head, int num){
    int pos=1;
    while(head != NULL){
        if(head->num==num)
            return pos;
        head=head->next;
        pos++;
    }
    return -1;
}

Boolean equals(Node* head1, Node* head2){
    while(head1!=NULL && head2!=NULL){
        if(head1->num != head2->num)
            return false;
        head1=head1->next;
        head2=head2->next;
    }
    if(head1==NULL && head2==NULL)
        return true;
    else
        return false;
}

Node* insertToStart(Node* head, int num){
    Node* tmp = newNode(num);
    if(tmp!=NULL){
        tmp->next=head;
        head=tmp;
    }
    return head;
}

Node* insertToEnd(Node* head, int num){
    if(head==NULL)
        return newNode(num);
    else{
        Node* tmp = head;
        while(tmp->next!=NULL)
            tmp=tmp->next;
        tmp->next = newNode(num);
    }
    return head;
}

Node* insert(Node* head, int num, int pos) {
    if(head == NULL || pos == 1)
        return insertToStart(head,num);
    else{
        Node* tmp=head;
        int i=1;
        while(tmp!=NULL && i<pos-1){
            tmp=tmp->next;
            i++;
        }
        if(i==pos-1){
            Node* tmp2=newNode(num);
            tmp2->next=tmp->next;
            tmp->next=tmp2;
        }
    }
    return head;
}

Node* removeFirst(Node* head){
    if(head != NULL){
        Node* tmp = head;
        head=head->next;
        free(tmp);
    }
    return head;
}

Node* removeLast(Node* head){
    if(head==NULL || head->next==NULL){
        free(head);
        head=NULL;
        return head;
    }
    else{
        Node* tmp=head;
        while(tmp->next->next != NULL)
            tmp=tmp->next;
        free(tmp->next);
        tmp->next=NULL;
    }
    return head;
}

Node* removeFrom(Node* head, int pos){
    if(pos==1)
        removeFirst(head);
    else{
        Node* tmp=head;
        int i=1;
        while(tmp!=NULL && i<pos-1){
            tmp=tmp->next;
            i++;
        }
        if(i==pos-1){
            Node* tmp2 = tmp->next;
            tmp->next = tmp->next->next;
            free(tmp2);
        }
    }
    return head;
}