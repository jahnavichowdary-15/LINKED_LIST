#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *head = NULL;

void insert(int x) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = x;
    n->next = head;
    head = n;
}

void del() {
    if (head) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }
}

void show() {
    struct Node *t = head;
    while (t) {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    show();   // Output: 3 2 1
    del();
    show();   // Output: 2 1
    return 0;
}
