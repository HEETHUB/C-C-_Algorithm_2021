#include <stdio.h>
#include <stdlib.h>

// A structure to represent a stack
struct Stack {
    int top;
    unsigned capacity;
    char* array;
};
 
// function to create a stack of given capacity. It initializes size of
// stack as 0
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (char*)malloc(stack->capacity * sizeof(char));
    return stack;
}
 
// Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}
 
// Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}
 
// Function to add an item to stack.  It increases top by 1
void push(struct Stack* stack, char item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}
 
// Function to remove an item from stack.  It decreases top by 1
char pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return '0';
    return stack->array[stack->top--];
}

int main(int argc, char* argv[])
{  

  char* strInput = argv[1];
  int success = 0; // 0 on success, -1 on failure

  /* Write your code here */	
  struct Stack* s = createStack(sizeof(argv[1]));
  int i = 0;
  /* if (s == NULL) {
      printf("No Stack!\n");
  }
  else {
      printf("Stack exists\n");
  }
  if (isEmpty(s)) {
      printf("s is Empty!\n");
  } */

  while (strInput[i]) {
      //printf("%d's input is %c\n",i, strInput[i]);
      if (strInput[i] == ']') {
          if (s->array[s->top] == '[') {
              //printf("%d's input is %c, so pop the stack\n",i-1,strInput[i-1]);
              pop(s);
          }
      }
      else if (strInput[i] == '}') {
          if (s->array[s->top] == '{') {
              //printf("%d's input is %c, so pop the stack\n",i-1,strInput[i-1]);
              pop(s);
          }}
      else if (strInput[i] == ')') {
          if (s->array[s->top] == '(') {
             //printf("%d's input is %c, so pop the stack\n",i-1,strInput[i-1]);
              pop(s);
          }  
      }
      else {
          //printf("push the value %c\n", strInput[i]);
          push(s, strInput[i]);
      }
      //printf("#%d'th iter, top of the stack s is %d\n",i, s->top);
      i++;
  }
  
  //printf("elements of the stack s is %s\n", s->array);

  if (isEmpty(s)){
      //printf("s is Empty!\n");
    success = 0;
  }
  else {
      //printf("s isn't Empty!\n");
    success = -1;
  }
  free(s);
  
	/* Do not modify below */	
  printf("%d", success);

  return 0;


}


