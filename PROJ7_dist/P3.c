#include <stdio.h>
#include <stdlib.h>

/* Linked list node structure */
struct Node {
    int data;
    struct Node* next;
};
 
/* Create a new node */
struct Node * createNode(struct Node * newNode, int data){
  newNode = (struct Node *) malloc(sizeof(struct Node));
  newNode->data = data;
  return newNode;
}

int main(int argc, char* argv[])
{  
  /* length: the length of input arguments (except for inputList.txt) */
  int length = argc - 2;
  /* inputArr: array of input arguments (except for inputList.txt) */
  int * inputArr = (int *) malloc(sizeof(int) * length);
  /* filepath: path for inputList.txt which will be give as a first argument */
  char * filepath = argv[1]; 

  /* Create inputArr */
  for (int i = 0; i < length; ++i){
    inputArr[i] = atoi(argv[i+2]);
  }

  /* Create a linked list from file input */
  int k = 1;
  struct Node* head = NULL;
  struct Node* prev = NULL;
  struct Node* curr = NULL;

  FILE *fp = fopen(filepath, "r");
  char buffer[10]; 
  
  while (fscanf(fp, "%s", buffer) == 1){
    curr = createNode(curr, atoi(buffer));  
    if (k > 1)
    {
      prev->next = curr;
    }
    else
      head = curr;

    k++;
    prev = curr;
  }
  curr->next = NULL;
  fclose(fp);

  /* numConnected: the number of connected "cluster" */
  int numConnected = 0;

  /* Write your code here */
  struct Node* node1;
  struct Node* node2;
  int new = 0;
  int l = 0;

  for (int i=0; i < length; i++) {
    curr = head;
    new = 1;
    if (i == 0) {
      numConnected++;
      continue;
    }

    for (int j=0; j < i; j++) {
      curr = head;
      // finding node1 and node2
      while (curr) {
        if (curr->data == inputArr[i])
          node1 = curr;
        else if (curr->data == inputArr[j])
          node2 = curr;
        curr = curr->next;
      }
      //printf("i is %d, j is %d ---->  node1 is %d, node2 is %d\n", i, j, node1->data, node2->data);
      // check if node1 and node2 are connected
      // #1 check with node1
      l = 0;
      while (l < length) {
        if (node1->next == NULL){
          //printf("node1->next not exists\n");
          break;}
        else if (node1->next == node2) {
          new = 0;
          //printf("node1->next is node2 --> new = 0\n");
          break;
        }
        else if (node1->next->data == inputArr[l]) {
          node1 = node1->next;
          l = 0;
          continue;
        }
        l++;
      }

      // #2 check with node2
      l = 0;
      while (l < length) {
        if (node2->next == NULL){
          //printf("node2->next not exists\n");
          break;}
        else if (node2->next == node1) {
          //printf("node2->next is node1 --> new = 0\n");
          new = 0;
          break;
        }
        else if (node2->next->data == inputArr[l]) {
          node2 = node2->next;
          l = 0;
          continue;
        }
        l++;
      }
    }
    if (new == 1)
      numConnected++;
    //printf("i is %d ---->  new is %d, so numConnected is %d\n", i, new, numConnected);
  }

	/* Do not modify below */	
  printf("%d", numConnected);

  return 0;


}


