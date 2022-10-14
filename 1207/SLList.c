#include <stdio.h>
#include <stdlib.h>

void addFirst();
int getFirst();
int getSize();
void printSLList();
void deleteNode();
int getTop();

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
    printSLList(&myLL);

    addFirst(&myLL, 10);
    printSLList(&myLL);

    addFirst(&myLL, 20);
    printSLList(&myLL);

    addFirst(&myLL, 30);
    printSLList(&myLL);

    deleteNode(&myLL, 20);
    printSLList(&myLL);

    deleteNode(&myLL, 30);
    printSLList(&myLL);

    return 0;
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


LinkedNode *searchNode(SLList *LL, int x) {
    LinkedNode *curr = LL->first;
    if (LL->size == 0)
        return NULL;

    while (curr) {
        if (curr->val == x)
            return curr;
        curr = curr->next;
    }
    return NULL;
}

void deleteNode(SLList *LL, int x) {
    LinkedNode *curr = LL->first;
    LinkedNode *prev = NULL;

    while (curr != NULL) {
        if (curr->val == x) {
            if (curr == LL->first) {
                LL->first = LL->first->next;
            }
            else {
                prev->next = curr->next;
            }
            free(curr);
            LL->size--;
            return;
        }
        else {
            prev = curr;
            curr = curr->next;
        }
    }
 
/* my code
    if (curr->val == x) {
        LL->first = curr->next;
        return ;
        //free(curr);
    }
    while (curr) {
        if (curr->next->val == x) {
            curr->next = curr->next->next;
            break;
            //free(curr);
        }
        curr = curr->next;
    }*/
}

int getTop(SLList *LL, int defVal) {
    LinkedNode *curr;

    curr = (LinkedNode*) malloc(sizeof(LinkedNode));
    if (LL->first) {
        curr = curr-1;
        free(curr+1);
        return curr->val;
    }
    else 
        return defVal;
}