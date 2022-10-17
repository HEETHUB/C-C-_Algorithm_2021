/* Description
 * Write a program that reads any english alphabet from the keyboard 
   and prints every character from that character down 
   to the character A in the order in which they appear in the ASCII table
 */

#include <stdio.h>

int main(int argc, char* argv[]){
	/* Please write your code below */
  char ch;
  char ch1 = 'A';
  scanf("%c", &ch);
  for (char ch2 = ch; ch2 >= ch1; ch2--)
    printf("%c", ch2);


	/* Do not modify below */
}

