#include<stdio.h>
#include<conio.h>


int main()
{

	int num;
	int i,j,k,n,l,x,h;

do
{
	printf(" Introduza um numero : ");
		scanf("%d",&num);
}
	while (num<2);
		n=num-1;
		l=0;
		k=0;
	for (i=1; i<=num; i++)
{

	for (l=1; l<=n; l++)
	{
		printf(" ");
	}
	for (j=1; j<=i; j++)
	{
		
		printf("%d",j);
		
		
	}
	for (k=j; k<=i; k--)
	{
		printf("%d",(k-1));
	}
	
	
	
	
		
	printf("\n");
	
	n--;

}

return 0;
}

