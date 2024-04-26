#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;


void push(Node **head, int data){
    Node *new_node = (Node*)malloc(sizeof(Node));
    if(!new_node) return;
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void pop(Node **head){
    if(!head) return;
    Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

int top(Node *head){
    if(!head) {
        printf("Stack is empty\n");
        return -1;
    }
    return (head)->data;
}

bool empty(Node *head){
    if(!head) return true;
    return false;
}



int main(){
    Node *head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);

    if(!empty(head)){
        printf("Stack is not empty\n");
    }
    else {
        printf("Stack is empty\n");
    }

    printf("%d\n", top(head));
    pop(&head);
    printf("%d\n", top(head));
    pop(&head);
    printf("%d\n", top(head));
    pop(&head);
    printf("%d\n", top(head));


    if(!empty(head)){
        printf("Stack is not empty\n");
    }
    else {
        printf("Stack is empty\n");
    }

   return 0;
}