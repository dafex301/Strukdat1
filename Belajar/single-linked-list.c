#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct note *link;
};

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 96;
    current->link = NULL;
    head->link = (struct note *) current;

    current = malloc(sizeof(struct node));
    current->data = 69;
    current->link = NULL;

    head->link->link = current;



    return 0;
}

