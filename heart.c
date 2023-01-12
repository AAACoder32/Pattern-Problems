
// AAACoder Heart Star Pattern
#include <stdio.h>

int main()
{
	int row;
	scanf("%d",&row);
	int n = 0;
	
	while(n <= row){
	  int space = row - n;
	  while(space>0){
	    printf(" ");
	    space--;
	  }
	  int col = n*2+1;
	  while(col>0){
	    printf("*");
	    col--;
	  }
	 
	  int space2 = 2*(row-n);
	  while(space2>0){
	    printf(" ");
	    space2--;
	  }
	  int col2 = n*2+1;
	  while(col2>0){
	    printf("*");
	    col2--;
	  }
	  printf("\n");
	  n++;
	}
	
	int l=row;
	
	while(l >= 0){
	  int space = 2*(row - l);
	  while(space>0){
	    printf(" ");
	    space--;
	  }
	  int col = l*4+1;
	  while(col>0){
	    printf("*");
	    col--;
	  }
	  printf("\n");
	  l--;
	}
	return 0; 
}