#include  <stdio.h>

int main (void) {
	
	int i, j, k, num;
	
 	printf ("Insira um numero e tenha uma surpresa:\n");
		 scanf ("%d", &num);
		 
	 for (i=1; i<=num; i++){
	 	
  		for (j=num; j>=i; j--)
  		
			printf (" ");
			
  	for (k=1; k<=i; k++)
  	
		printf ("*");
		
  			printf ("\n");
 }
	
return 0;
}
