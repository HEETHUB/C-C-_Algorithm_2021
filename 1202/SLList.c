#include <stdio.h>
#include <stdlib.h>

void addFirst();
int getFirst();
int getSize();
void printSLList();

typedef struct nodeType LinkedNode;
struct nodeType {
    int val;
    LinkedNode *next;
};

LinkedNode *createNode(int x) {
    LinkedNode *newNode;
    newNode = (LinkedNode *)malloc(sizeof(LinkedNode));
    newNode->val = x;
    newNode->next = NULL;
    return newNode;
}

typedef struct listType SLList;
struct listType {
    LinkedNode *first;
    int size;
};

int main(void) {
    SLList myLL = {NULL, 0};
    printf("%d\n", getFirst(&myLL));
    getSize(&myLL);
    printSLList(&myLL);
}

void addFirst(SLList *LL, int x) {
    LinkedNode *newFirst;
    newFirst = createNode(x);
    newFirst->next = LL->first;
    LL->first = newFirst;
    LL->size++;
}

int getFirst(SLList *LL) {
    if (LL->first != NULL)
        return LL->first->val;
    return 0;
}

int getSize(SLList *LL) {
    return LL->size;
}

void printSLList(SLList *LL) {
    LinkedNode *curr = LL->first;
    printf("size: %d, firstVal: %d, allVals: ", getSize(LL), getFirst(LL));
    while (curr) {
        printf("%d", curr->val);
        curr = curr->next;
    }
    printf("END\n");
}