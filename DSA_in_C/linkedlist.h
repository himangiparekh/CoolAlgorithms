#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node * next;
} node;

node *create(){
    int n;
    node *head = (node *) malloc(sizeof(node));
    printf("How many nodes do you want? ");
    scanf("%d", &n);

    node *temp;
    temp = head;
    for(int i = 0; i < n; i++){
        node *new = (node *) malloc(sizeof(node));
        printf("What is the value of the node %d? ", i+1);
        scanf("%d", &(new->val));
        temp->next = new;
        new->next = NULL;
        temp = temp->next;
    }

    head = head->next;

    return head;
    free(temp);
}

void printLL(node *head){

    node *current;
    current = head;
    while(current != NULL){
        printf("%d -> ", current->val);
        current = current -> next;
    }
    printf("NULL\n");
    
    free(current);
}

void insert(node *head){
    node *newnode = (node *) malloc(sizeof(node));
    printf("What node do you want to insert? ");
    scanf("%d", &(newnode->val));
    newnode->next = NULL;

    node *current = head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = newnode;
    printf("%d\n", newnode->val);
}
























// node *create(){
//     node *head, *newnode, *temp = NULL;

//     printf("How many nodes do you want?");
//     int n; 
//     scanf("%d", &n);

//     newnode = (node *) malloc(sizeof(node));
//     printf("Enter Value: ");
//     scanf("%d", &(newnode->val));
//     newnode->next = NULL;

//     int i = 2;

//     while(i < n+1){

//         newnode = (node *) malloc(sizeof(node));
//         printf("Enter Value: ");
//         scanf("%d", &(newnode->val));
//         newnode->next = NULL;
//         head = temp = newnode;
       
//         temp->next = newnode;
//         temp = temp->next;
//         i++;
        
//     }

//     return head;

// }

// void printLL(node *newnode){
//     printf("Values: ");
//     while(newnode != NULL){
//         printf("%d -> ", newnode->val);
//         newnode = newnode->next;
//     }
//     printf("NULL\n");
// }


