#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}Node;

Node *createListOfNumber()
{
    Node *head;
    Node *cur_node;

    int num;

    printf("Please enter a number or '-' to finish: \n");
    scanf("%d", &num);

    if (num==-1)
        return NULL;

    head = (Node*)malloc(sizeof(Node));
    cur_node = head;
    cur_node->data = num;

    printf("Please enter a number or '-' to finish: \n");
    scanf("%d", &num);

    while(num!=-1)
    {
        cur_node->next = (Node*)malloc(sizeof(Node));
        cur_node = cur_node->next;
        cur_node->data = num;
        printf("Please enter a number or '-1' to finish: ");
        scanf("%d", &num);
    }

    cur_node->next = NULL;
    return head;
}



int main()
{
    createListOfNumber();
    
    return 0;
}