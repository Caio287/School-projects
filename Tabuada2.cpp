#include <stdio.h>
#include <stdlib.h>
    
    int main()
    {
        int i, j,p;
        
        
        	for (i = 2; i <= 10; i = i + 1)
        {
            for (j = 1; j <= 10; j = j + 1)
                printf("%2d x %2d = %3d\n", j, i, i * j);
                
                scanf("%c",&p);
                
           printf("\n");
        }
		
        
            
       system("pause");
       return 0;
  }
