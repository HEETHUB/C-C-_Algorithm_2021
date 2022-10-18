#include <stdio.h>
#include <stdlib.h>
#define MAX_NUMS 10

void InsertionSortReverse(char list[]);
int main(int argc, char* argv[])
{
  char chars[MAX_NUMS]; //List of characters to be sorted

  if (argc < MAX_NUMS){
    printf("Please give %d inputs\n", MAX_NUMS);
    return -1;
  }
  

  for (int index=0; index < MAX_NUMS; index++)
  {
    chars[index] = argv[index + 1][0];    
  }

  InsertionSortReverse(chars); //Call sorting routine

  //Print sorted list  
  for (int index = 0; index < MAX_NUMS; index++)
    printf("%c", chars[index]);

  return 0;
}
/* Do not modify above*/

void InsertionSortReverse(char list[])
{
  /* Write your code here */	
  int i, j, key;

  for (i=1; i<MAX_NUMS; i++) {
    key = list[i];
    for (j = i-1; j>=0; j--) {
      if(list[j] < key){
      list[j+1] = list[j];
    } else{ 
      break;
    }
    }
    list[j+1] = key;
  }
}
