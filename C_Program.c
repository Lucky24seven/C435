/* William Lawecki
   Jan 25, 2024
   C435 Homework 1
   Practice C program, compiled on Linux, written with emacs, 
   that prints out an input array, uses a bubble sort 
   algorithm to sort, then prints the sorted array back to user.
*/
#include<stdio.h>
#include<stdlib.h>

/*Just defining how long our array is since we know the contents and length*/
#define ARYLEN 9

int main(void){
  
  int i, j, temp;
  int Numbers[] = {98,2,77,-1,45,0,3,66,1024};
  
  printf("This is our unsorted array before the bubble sort:\n");

  for(i=0; i<ARYLEN; i++){
    printf("%d ",Numbers[i]);
}

  printf("\nAfter bubble sorting, the array is as follows:\n");

  /*Bubble Sort Algorithm here:*/

  for(i=0; i< ARYLEN-1; i++){
    for(j =0; j<ARYLEN-i-1; j++){
      if(Numbers[j] > Numbers[j+1]){
	  temp = Numbers[j];
	  Numbers[j] = Numbers[j+1];
	  Numbers[j+1] = temp;
	}
    }
}
    for(i=0; i<ARYLEN; i++){
      printf("%d ", Numbers[i]);
}
  return 0;
}
